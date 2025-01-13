//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#include <iostream>
#include "pointersreferences.h"

#include "utilities.h"

#define MAGIC_NUMBER 317138913L

long normal_pointers()
{
    constexpr long number { MAGIC_NUMBER };
    const long* number_ptr { &number };  // number_ptr is the pointer to number
    // & (address of) is the operator that produces the address of number
    const long number_extracted_from_ptr = *number_ptr;

    std::cout << "Number > " << number << std::endl;
    std::cout << "Address of Number > " << &number << std::endl;
    std::cout << "Content of the pointer > " << number_extracted_from_ptr << std::endl;

    return number_extracted_from_ptr;
}

void pointer_references()
{
    print_header("      POINTERs and REFERENCEs ");
    const auto number = normal_pointers();

    // ALERT:
    // You should never use "new" or "delete" - direct dynamic heap memory allocation - in Modern C++!
    // Use Smart Pointers:

    // Unique Pointer: only ONE pointer to the same address
    const auto unique_ptr { std::make_unique<long>(MAGIC_NUMBER) };
    // Better:
    // auto unique_ptr { std::make_unique<long>(MAGIC_NUMBER) };
    const long extracted = *unique_ptr;

    std::cout << "Address of the unique smart pointer > " << unique_ptr.get() << std::endl;
    std::cout << "Content of the unique smart pointer > " << extracted << std::endl;

    // Shared Pointer: many pointers to the same address. It comes with a reference count
    const auto shared_ptr {std::make_shared<long>(MAGIC_NUMBER)};
    const long number_extracted = *shared_ptr;
    std::cout << "Address of the shared smart pointer > " << shared_ptr.get() << std::endl;
    std::cout << "Content of the shared smart pointer > " << number_extracted << std::endl;

    // References
    const long& number_reference { number };
    std::cout << "Content of the number reference > " << number_reference << std::endl;

}


