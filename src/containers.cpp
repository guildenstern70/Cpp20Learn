//
// C++ 20 Learn
// Copyright (C) 2021-23, Alessio Saltarin
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

double sumvector(const CouplesVector& container)
{
    double sum = 0.0;
    for (auto item : container)
    {
        std::cout << "Couple #" << item.first << " = " << item.second << std::endl;
        sum += item.second;
    }
    return sum;
}

double sumdeque(const std::unique_ptr<CouplesDeque>& container)
{
    double sum = 0.0;
    for (auto item : *container)
    {
        std::cout << "Couple #" << item.first << " = " << item.second << std::endl;
        sum += item.second;
    }
    return sum;
}

double createstackvector()
{
    printheader("      VECTOR (STACK) ");

    Couple one { 1, 2.30 };
    Couple two { 2, 5.10 };
    Couple three { 3, 1.34 };

    CouplesVector container;
    container.push_back(one);
    container.push_back(two);
    container.push_back(three);

    return sumvector(container);
}

double createheapdeque()
{
    printheader("      DEQUE (HEAP) ");

    Couple one { 1, 4.20 };
    Couple two { 2, 2.15 };
    Couple three { 3, 1.57 };

    std::unique_ptr<CouplesDeque> couples { std::make_unique<CouplesDeque>() };
    couples->push_back(one);
    couples->push_back(two);
    couples->push_back(three);

    return sumdeque(couples);
}
