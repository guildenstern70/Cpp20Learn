//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "functions.h"
#include "utilities.h"

// get_string_len is an output parameter. Note that it is a reference.
void output_parameter(size_t& len_of_string, const std::string_view input_string)
{
    len_of_string = input_string.length();
}

// message is a parameter with a default value
// the default value is defined in the header file
std::string hello(const std::string& message)
{
    return message + " world!";
}

size_t get_string_len()
{
    size_t len_of_string = 0;
    const std::string input { "This is a string" };
    output_parameter(len_of_string, input);
    std::cout << "String length is " << len_of_string << std::endl;
    return len_of_string;
}

void functions()
{
    print_header("      FUNCTIONS ");
    get_string_len();
    std::cout << hello() << std::endl;
}
