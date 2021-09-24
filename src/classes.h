//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#ifndef CPP20LEARN_CLASSES_H
#define CPP20LEARN_CLASSES_H

#include <iostream>
#include <memory>

class Box
{
public:

    Box() = default;

    // Constructor with member initializer list
    // This is preferrable to initialize members
    // in function's body.
    Box(double length, double width, double height) :
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
    // use 'explicit' keywork
    explicit Box(double length) :
        length { length }
    {
        this->height = 1;
        this->width = 1;
    }

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
double boxvolume(const Box& box);
double boxvolume(double length, double width, double height);


#endif //CPP20LEARN_CLASSES_H
