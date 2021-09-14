//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#include "functions.h"
#include "utilities.h"

// getstringlen is an output parameter. Note that it is a reference.
void outputparameter(size_t& lenofstring, const std::string_view inputstring)
{
    lenofstring = inputstring.length();
}

// message is a parameter with a default value
// the default value is defined in the header file
std::string hello(const std::string& message)
{
    return message + " world!";
}

size_t getstringlen()
{
    size_t lenofstring = 0;
    std::string input { "This is a string" };
    outputparameter(lenofstring, input);
    std::cout << "String length is " << lenofstring << std::endl;
    return lenofstring;
}

void functions()
{
    printheader("      FUNCTIONS ");
    getstringlen();
    std::cout << hello() << std::endl;
}
