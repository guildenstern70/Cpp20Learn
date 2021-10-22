//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "random.h"
#include "utilities.h"

#include <string>

double randomdouble()
{
    // Seed with a real random value, if available
    std::random_device r;

    // Choose a random mean between 5 and 20
    std::default_random_engine e1(r());
    double lower_bound = 5.0;
    double upper_bound = 20.0;
    std::uniform_real_distribution<double> unif(lower_bound,upper_bound);
    return unif(e1);
}

void testrandom()
{
    printheader("      RANDOM ");
    for (int j=0; j<5; j++)
    {
        auto randomnumber = randomdouble();
        std::cout << "Random double between 5 and 20: " << std::to_string(randomnumber) << std::endl;
    }
}
