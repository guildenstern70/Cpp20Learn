//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#include <iostream>
#include "pointersreferences.h"

void pointerreferences()
{
    long number {317138913L};
    long* numberptr {&number};  // numberptr is the pointer to number
                                // & (address of) is the operator that produces the address of number
    long numberextractedfromptr = *numberptr;


    std::cout << "Number > " << number << std::endl;
    std::cout << "Address of Number > " << &number << std::endl;
    std::cout << "Content of the pointer > " << numberextractedfromptr << std::endl;

}


