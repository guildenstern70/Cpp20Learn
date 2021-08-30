//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#include "arrayloops.h"

void arrayloops()
{
    const size_t size {6};
    uint height[size] { 12, 34, 3, 45, 98, 23 };

    for (size_t index {}; index < size; ++index)
    {
        std::cout << height[index] << std::endl;
    }
}

