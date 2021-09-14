//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#include "templates.h"

template<typename T>
T  getlargerbetween(T a, T b)
{
    return a > b ? a : b;
}

double tellmewhichislarger(double a, double  b)
{
    return getlargerbetween(a, b);
}

void whichislarger()
{
    std::cout << "The larger between 45.0 and 67.9 is " << tellmewhichislarger(45.0, 67.9)  << std::endl;
}
