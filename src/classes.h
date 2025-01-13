//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#ifndef CPP20LEARN_CLASSES_H
#define CPP20LEARN_CLASSES_H

#include <memory>

class Box
{
public:

    Box() = default;

    // Constructor with member initializer list
    // This is preferable to initialize members
    // in function's body.
    Box(const double length, const double width, const double height) :
            length { length }, width { width }, height { height } {};

    // Copy constructor: construct box from another box.
    // You should never define one, because the compiler already
    // produce one for you.
    // Same as
    // Box(const Box& box)
    //     length { box.length }, width { box.width }, height { box.height } {};
    // To prohibit copy construction:
    //     Box(const Box& box) = delete;
    Box(const Box& box) = default;

    // Constructor with a single parameter
    // can be called for implicit conversions. To prevent this
    // use 'explicit' keyword
    explicit Box(const double length) :
        length { length }
    {
        this->height = 1;
        this->width = 1;
    }

    // Operator overloading
    bool operator<(const Box&  aBox) const;

    //
    // Static member function.
    // In this case it provides a factory method
    //
    static std::shared_ptr<Box> createBox(double length, double width, double height);

    // nodiscard means that this return value SHOULD NOT be ignored
    [[nodiscard]] double volume() const;

    // Getters
    // Const keyword means that this method does not change the object state.
    // This is 'const correctness'
    [[nodiscard]] double getLength() const { return this->length; }
    [[nodiscard]] double getWidth() const { return this->width; }
    [[nodiscard]] double getHeight() const { return this->height; }

    // Setters
    void setLength(double aLength) { this->length = aLength; }
    void setWidth(double aWidth) { this->length = aWidth; }
    void setHeight(double aHeight) { this->length = aHeight; }

private:
    double length { 1.0 };
    double width { 1.0 };
    double height { 1.0 };

};

void testbox();
double box_volume(const Box& box);
double box_volume(double length, double width, double height);


#endif //CPP20LEARN_CLASSES_H
