//
// Created by Alessio Saltarin on 20/09/21.
//

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
    return abox.volume();
}