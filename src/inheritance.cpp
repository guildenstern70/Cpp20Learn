//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
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


double testcolorcard()
{
    printheader("      INHERITANCE ");
    auto colorcard = ColorCard { 10.0, 11.0, Color::Green };
    double w = colorcard.getWidth();
    double h = colorcard.getHeight();
    std::cout << colorcard.getColor() << " color card [w=" << w << ", h=" << h << "]" << std::endl;
    return (w+h);
}