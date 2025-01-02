//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include <array>
#include "arrayloops.h"
#include "utilities.h"

constexpr size_t size{6};
constexpr uint height[size]{12, 34, 3, 45, 98, 23};

//
// Classical
//
uint classical_loop()
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
uint range_based_loop()
{
    uint sum = 0;

    for (uint h: height)
    {
        sum += h;
    }

    return sum;
}

void array_loops()
{
    print_header("          ARRAYs and LOOPs");

    std::cout << "Classical loop sum = " << classical_loop() << std::endl;
    std::cout << "Range based loop sum = " << range_based_loop() << std::endl;

    // Size of an array
    constexpr int height_length = std::size(height);

    // While
    size_t index {0};
    while (index < height_length)
    {
        std::cout << height[index++] << " ";
    }
    std::cout << std::endl;

    // Std::Array
    constexpr std::array<uint, size> height_arr {12, 34, 3, 45};

    // Range based
    for (const uint h: height_arr)
    {
        std::cout << h << " ";
    }
    std::cout << std::endl;

    // Accessing single items
    std::cout << "3rd item is " << height[2] << std::endl;
    std::cout << "3rd item is " << height_arr.at(2) << std::endl;
}

