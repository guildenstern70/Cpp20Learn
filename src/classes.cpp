//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#include <memory>
#include "classes.h"
#include "utilities.h"

Box::Box(double length, double width, double height)
{
    this->length = length;
    this->height = height;
    this->width = width;
}

double Box::volume() const
{
    return this->width * this->height * this->length;
}

void testbox()
{
    printheader("      CLASSES ");
    std::cout << "Box volume is " << boxvolume(12.0, 21.3, 13.4) << std::endl;
}

double boxvolume(double length, double width, double height)
{
    Box abox { length, width, height };
    auto boxptr { std::make_unique<Box>(length, width, height) };
    if (abox.volume() == boxptr->volume())
    {
        return abox.volume();
    }
    return -1;
}