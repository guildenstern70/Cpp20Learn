//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "classes.h"
#include "utilities.h"

double Box::volume() const
{
    return this->width * this->height * this->length;
}

void testbox()
{
    printheader("      CLASSES ");
    auto box = Box { 10 };
    auto anotherBox = Box { box };
    anotherBox.setHeight(10.2);
    anotherBox.setWidth(21.1);
    anotherBox.setLength(1.21);
    std::cout << "Box 1 volume is " << boxvolume(12.0, 21.3, 13.4) << std::endl;
    std::cout << "Box 2 volume is " << boxvolume( box ) << std::endl;
    std::cout << "Box 3 volume is " << boxvolume( anotherBox ) << std::endl;
}

double boxvolume(double length, double width, double height)
{
    Box abox { length, width, height };
    return abox.volume();
}

double boxvolume(Box box)
{
    return box.volume();
}