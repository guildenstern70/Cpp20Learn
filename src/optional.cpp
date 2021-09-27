//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "optional.h"
#include "utilities.h"

// Find the occurrence of a string in a given string
// and return the occurrence if found, and optional empty if not
std::optional<std::string_view> findoccurrence(std::string_view inputstring, std::string_view whattofind)
{
    std::optional<std::string_view> foundstring = std::nullopt;
    ulong found = inputstring.find(whattofind);
    if (found > 0)
    {
        foundstring = inputstring.substr(found, whattofind.length());
    }
    return foundstring;
}

// If optional has value, the member "has_value()" is true.
// You can use .value() to get the optional value
void optional()
{
    printheader("      OPTIONAL AND STRING_VIEW ");
    auto found = findoccurrence("E FEDEL NON LEDE FE", "LEDE");
    if (found.has_value())
    {
        std::cout << "Found " << found.value() << " in 'E FEDEL NON LEDE FE'" << std:: endl;
    }
    else
    {
        std::cout << "Cannot find 'LEDE' in 'E FEDEL NON LEDE FE'" << std:: endl;
    }
}
