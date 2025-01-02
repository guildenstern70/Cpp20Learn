//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "inheritance.h"
#include "utilities.h"

std::ostream& operator<<(std::ostream& os, Color c)
{
    switch (c)
    {
        case Red   : os << "Red";    break;
        case Yellow: os << "Yellow"; break;
        case Green : os << "Green";  break;
        case Blue  : os << "Blue";   break;
        default    : os.setstate(std::ios_base::failbit);
    }
    return os;
}


double test_color_card()
{
    print_header("      INHERITANCE ");
    const auto color_card = ColorCard { 10.0, 11.0, Color::Green };
    const double w = color_card.getWidth();
    const double h = color_card.getHeight();
    std::cout << color_card.getColor() << " color card [w=" << w << ", h=" << h << "]" << std::endl;
    return (w+h);
}