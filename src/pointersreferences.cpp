//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include "pointersreferences.h"

#define MAGIC_NUMBER 317138913L

long normalpointers()
{
    long number { MAGIC_NUMBER };
    long* numberptr { &number };  // numberptr is the pointer to number
    // & (address of) is the operator that produces the address of number
    long numberextractedfromptr = *numberptr;

    std::cout << "Number > " << number << std::endl;
    std::cout << "Address of Number > " << &number << std::endl;
    std::cout << "Content of the pointer > " << numberextractedfromptr << std::endl;

    return numberextractedfromptr;
}

void pointerreferences()
{
    printheader("      POINTERs and REFERENCEs ");
    auto number = normalpointers();

    // ALERT:
    // You should never use "new" or "delete" - direct dynamic heap memory allocation - in Modern C++!
    // Use Smart Pointers:

    // Unique Pointer: only ONE pointer to the same address
    std::unique_ptr<long> uniquenumberptr { std::make_unique<long>(MAGIC_NUMBER) };
    // Better:
    // auto uniquenumberptr { std::make_unique<long>(MAGIC_NUMBER) };
    long numberextractedfromuniqueptr = *uniquenumberptr;

    std::cout << "Address of the unique smart pointer > " << uniquenumberptr.get() << std::endl;
    std::cout << "Content of the unique smart pointer > " << numberextractedfromuniqueptr << std::endl;

    // Shared Pointer: many pointers to the same address. It comes with a reference count
    auto sharednumberptr {std::make_shared<long>(MAGIC_NUMBER)};
    long numberextractedfromsharedptr = *sharednumberptr;
    std::cout << "Address of the shared smart pointer > " << sharednumberptr.get() << std::endl;
    std::cout << "Content of the shared smart pointer > " << numberextractedfromsharedptr << std::endl;

    // References
    long& numberreference { number };
    std::cout << "Content of the number reference > " << numberreference << std::endl;

}


