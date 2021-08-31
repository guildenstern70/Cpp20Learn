//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#include "arrayloops.h"

void arrayloops()
{
    const size_t size{6};
    uint height[size]{12, 34, 3, 45, 98, 23};

    // Classical for loop
    for (size_t index{}; index < size; ++index)
    {
        std::cout << height[index] << " ";
    }
    std::cout << std::endl;

    // Range based
    for (uint h: height)
    {
        std::cout << h << " ";
    }
    std::cout << std::endl;

    // Size of an array
    const int heightLength = std::size(height);

    // While
    size_t index {0};
    while (index < heightLength)
    {
        std::cout << height[index++] << " ";
    }


}

