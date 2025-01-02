//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#ifndef CPP20LEARN_POLYMORPHISM_H
#define CPP20LEARN_POLYMORPHISM_H


// A class definition with just pure virtual
// functions is what in other OO languages
// is called 'interface'
class Shape
{
public:
    Shape() = default;
    virtual ~Shape() = default;
    [[nodiscard]] virtual double get_area() const = 0;
};

class Square : public Shape
{
public:
    explicit Square(double side): Shape(), side { side } {};
    [[nodiscard]] double get_area() const override;

private:
    double side;
};

class Circle : public Shape
{
public:
    explicit Circle(double radius): Shape(), radius { radius } {};
    [[nodiscard]] double get_area() const override;

private:
    double radius;
};

// This is a polymorphic method
double area_computer(const Shape& shape);

double polymorphism();

#endif //CPP20LEARN_POLYMORPHISM_H
