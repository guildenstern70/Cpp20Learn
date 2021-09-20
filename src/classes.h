//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#ifndef CPP20LEARN_CLASSES_H
#define CPP20LEARN_CLASSES_H

#include <iostream>

class Box
{
public:

    Box(double length, double width, double height);

    // nodiscard means that this return value SHOULD NOT be ignored
    [[nodiscard]] double volume() const;

private:
    double length { 1.0 };
    double width { 1.0 };
    double height { 1.0 };

};

void testbox();
double boxvolume(double length, double width, double height);


#endif //CPP20LEARN_CLASSES_H
