//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
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

bool Box::operator<(const Box &aBox) const
{
    return this->width < aBox.width;
}

std::shared_ptr<Box> Box::createBox(double length, double width, double height)
{
    return std::make_shared<Box>(length, width, height);
}

void testbox()
{
    print_header("      CLASSES ");
    const auto box = Box { 10 };
    auto anotherBox = Box { box };
    anotherBox.setHeight(10.2);
    anotherBox.setWidth(21.1);
    anotherBox.setLength(1.21);
    std::cout << "Box 1 volume is " << box_volume(12.0, 21.3, 13.4) << std::endl;
    std::cout << "Box 2 volume is " << box_volume( box ) << std::endl;
    std::cout << "Box 3 volume is " << box_volume( anotherBox ) << std::endl;
}

double box_volume(double length, double width, double height)
{
    auto abox = Box::createBox(length, width, height);
    return abox->volume();
}

double box_volume(const Box& box)
{
    return box.volume();
}