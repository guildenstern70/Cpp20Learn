//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#include <array>
#include "arrayloops.h"
#include "utilities.h"

const size_t size{6};
const uint height[size]{12, 34, 3, 45, 98, 23};

//
// Classical
//
uint classicalloop()
{
    uint sum = 0;

    // Classical for loop
    for (size_t index{}; index < size; ++index)
    {
        sum += height[index];
    }
    std::cout << std::endl;
    return sum;
}

//
// Range based
//
uint rangebasedloop()
{
    uint sum = 0;

    for (uint h: height)
    {
        sum += h;
    }

    return sum;
}

void arrayloops()
{
    printheader("          ARRAYs and LOOPs");

    std::cout << "Classical loop sum = " << classicalloop() << std::endl;
    std::cout << "Range based loop sum = " << rangebasedloop() << std::endl;



    // Size of an array
    const int heightLength = std::size(height);

    // While
    size_t index {0};
    while (index < heightLength)
    {
        std::cout << height[index++] << " ";
    }
    std::cout << std::endl;

    // Std::Array
    std::array<uint, size> heightArray {12, 34, 3, 45};

    // Range based
    for (uint h: heightArray)
    {
        std::cout << h << " ";
    }
    std::cout << std::endl;

    // Accessing single items
    std::cout << "3rd item is " << height[2] << std::endl;
    std::cout << "3rd item is " << heightArray.at(2) << std::endl;
}

