//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#ifndef CPP20LEARN_INHERITANCE_H
#define CPP20LEARN_INHERITANCE_H

#include <iostream>

enum Color {
    Yellow,
    Red,
    Blue,
    Green };

//
// Base class
//
class Card
{
public:
    Card(double width, double height):
            width { width }, height { height } {};

    [[nodiscard]] double getWidth() const { return this->width; }
    [[nodiscard]] double getHeight() const { return this->height; }

protected:
    double width { 1.0 };
    double height { 1.0 };
};

//
// Class inherited from Card
//
class ColorCard : public Card
{
public:
    explicit ColorCard(double width, double height, Color color) :
        Card(width, height)
    {
        this->color = color;
    }

    [[nodiscard]] Color getColor() const { return this->color; }

private:
    Color color = Color::Blue;
};


double testcolorcard();


#endif //CPP20LEARN_INHERITANCE_H
