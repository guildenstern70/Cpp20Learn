//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "optional.h"
#include "utilities.h"

// Find the occurrence of a string in a given string
// and return the occurrence if found, and optional empty if not
std::optional<std::string_view> find_occurrence(std::string_view input_string, const std::string_view what_to_find)
{
    std::optional<std::string_view> view = std::nullopt;
    if (const ulong found = input_string.find(what_to_find); found > 0)
    {
        view = input_string.substr(found, what_to_find.length());
    }
    return view;
}

// If optional has value, the member "has_value()" is true.
// You can use .value() to get the optional value
void optional()
{
    print_header("      OPTIONAL AND STRING_VIEW ");
    if (const auto found = find_occurrence("E FEDEL NON LEDE FE", "LEDE"); found.has_value())
    {
        std::cout << "Found " << found.value() << " in 'E FEDEL NON LEDE FE'" << std:: endl;
    }
    else
    {
        std::cout << "Cannot find 'LEDE' in 'E FEDEL NON LEDE FE'" << std:: endl;
    }
}
