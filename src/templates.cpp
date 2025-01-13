//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include <iostream>
#include "templates.h"

template<typename T>
T  get_larger_between(T a, T b)
{
    return a > b ? a : b;
}

double tell_me_which_is_larger(double a, double  b)
{
    return get_larger_between(a, b);
}

void which_is_larger()
{
    std::cout << "The larger between 45.0 and 67.9 is " << tell_me_which_is_larger(45.0, 67.9)  << std::endl;
}
