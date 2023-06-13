//
// C++ 20 Learn
// Copyright (C) 2021-23, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "polymorphism.h"
#include "utilities.h"
#include <numbers>
#include <iostream>

double Square::getArea() const
{
    return (this->side * this->side);
}

double Circle::getArea() const
{
    return (std::numbers::pi * this->radius * this->radius);
}

double areacomputer(const Shape& shape)
{
    return shape.getArea();
}

double polymorphism()
{
    printheader("      POLYMORPHISM ");
    auto aSquare = Square { 6.0 };
    auto aCircle = Circle { 5.6 };
    auto squareArea = areacomputer(aSquare);
    auto circleArea = areacomputer(aCircle);
    std::cout << "Square Area is " << squareArea << std::endl;
    std::cout << "Cirlce Area is " << circleArea << std::endl;
    return squareArea + circleArea;
}