//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "polymorphism.h"
#include "utilities.h"
#include <numbers>
#include <iostream>

double Square::get_area() const
{
    return this->side * this->side;
}

double Circle::get_area() const
{
    return (std::numbers::pi * this->radius * this->radius);
}

double area_computer(const Shape& shape)
{
    return shape.get_area();
}

double polymorphism()
{
    print_header("      POLYMORPHISM ");
    const auto a_square = Square { 6.0 };
    const auto a_circle = Circle { 5.6 };
    const auto square_area = area_computer(a_square);
    const auto circle_area = area_computer(a_circle);
    std::cout << "Square Area is " << square_area << std::endl;
    std::cout << "Circle Area is " << circle_area << std::endl;
    return square_area + circle_area;
}