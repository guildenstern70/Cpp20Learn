//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "random.h"
#include "utilities.h"

#include <string>

double random_double()
{
    // Seed with a real random value, if available
    std::random_device r;

    // Choose a random mean between 5 and 20
    std::default_random_engine e1(r());
    constexpr double lower_bound = 5.0;
    constexpr double upper_bound = 20.0;
    std::uniform_real_distribution<double> uniform_real_distribution(lower_bound,upper_bound);
    return uniform_real_distribution(e1);
}

void test_random()
{
    print_header("      RANDOM ");
    for (int j=0; j<5; j++)
    {
        const auto val = random_double();
        std::cout << "Random double between 5 and 20: " << std::to_string(val) << std::endl;
    }
}
