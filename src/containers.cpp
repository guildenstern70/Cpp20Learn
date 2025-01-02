//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "containers.h"
#include "utilities.h"
#include <utility>
#include <vector>
#include <memory>
#include <deque>
#include <iostream>

// Type Alias
using Couple = std::pair<int, double>;
using CouplesVector = std::vector<std::pair<int, double>>;
using CouplesDeque = std::deque<std::pair<int, double>>;

double sum_vector(const CouplesVector& container)
{
    double sum = 0.0;
    for (auto [fst, snd] : container)
    {
        std::cout << "Couple #" << fst << " = " << snd << std::endl;
        sum += snd;
    }
    return sum;
}

double sum_deque(const std::unique_ptr<CouplesDeque>& container)
{
    double sum = 0.0;
    for (auto item : *container)
    {
        std::cout << "Couple #" << item.first << " = " << item.second << std::endl;
        sum += item.second;
    }
    return sum;
}

double create_stack_vector()
{
    print_header("      VECTOR (STACK) ");

    constexpr Couple one { 1, 2.30 };
    constexpr Couple two { 2, 5.10 };
    constexpr Couple three { 3, 1.34 };

    CouplesVector container;
    container.push_back(one);
    container.push_back(two);
    container.push_back(three);

    return sum_vector(container);
}

double create_heap_deque()
{
    print_header("      DEQUE (HEAP) ");

    constexpr Couple one { 1, 4.20 };
    constexpr Couple two { 2, 2.15 };
    constexpr Couple three { 3, 1.57 };

    const auto couples { std::make_unique<CouplesDeque>() };
    couples->push_back(one);
    couples->push_back(two);
    couples->push_back(three);

    return sum_deque(couples);
}
