//
// Created by Alessio Saltarin on 20/09/21.
//

#ifndef CPP20LEARN_CLASSES_H
#define CPP20LEARN_CLASSES_H

#include <iostream>

class Box
{
public:

    Box(double length, double width, double height);
    double volume() const;

private:
    double length { 1.0 };
    double width { 1.0 };
    double height { 1.0 };

};

void testbox();
double boxvolume(double length, double width, double height);


#endif //CPP20LEARN_CLASSES_H
