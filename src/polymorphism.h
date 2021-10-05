//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
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
    [[nodiscard]] virtual double getArea() const = 0;
};

class Square : public Shape
{
public:
    explicit Square(double side): Shape(), side { side } {};
    [[nodiscard]] double getArea() const override;

private:
    double side;
};

class Circle : public Shape
{
public:
    explicit Circle(double radius): Shape(), radius { radius } {};
    [[nodiscard]] double getArea() const override;

private:
    double radius;
};

// This is a polymorphic method
double areacomputer(const Shape& shape);

double polymorphism();

#endif //CPP20LEARN_POLYMORPHISM_H
