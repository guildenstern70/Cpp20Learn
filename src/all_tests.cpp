//
// C++ 20 Learn
// Copyright (C) 2021-25, Alessio Saltarin
//
// This software is licensed under MIT license.
// See LICENSE.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "../doctest/doctest.h"
#include "arrayloops.h"
#include "pointersreferences.h"
#include "functions.h"
#include "optional.h"
#include "templates.h"
#include "classes.h"
#include "inheritance.h"
#include "polymorphism.h"
#include "containers.h"

TEST_CASE("Loops")
{
    SUBCASE("Classical")
    {
        CHECK(classical_loop() == 215);
    }
    SUBCASE("Range Based")
    {
        CHECK(range_based_loop() == 215);
    }
}

TEST_CASE("Pointers")
{
    SUBCASE("Normal")
    {
        CHECK(normal_pointers() == 317138913L);
    }
}

TEST_CASE("Functions")
{
    SUBCASE("Output Parameters")
    {
        CHECK(get_string_len() == 16);
    }
    SUBCASE("Default Parameters")
    {
        CHECK(hello() == "Hello world!");
    }
}

TEST_CASE("Optional")
{
    SUBCASE("Output Parameters")
    {
        CHECK(find_occurrence("E FEDEL NON LEDE FE", "LEDE") == "LEDE");
    }
}

TEST_CASE("Templates")
{
    SUBCASE("Function template")
    {
        CHECK(tell_me_which_is_larger(37.0, 33.2) == 37.0);
    }
}

TEST_CASE("Containers")
{
    SUBCASE("Vector (stack)")
    {
        CHECK(create_stack_vector() == 8.74);
    }
    SUBCASE("Deque (heap)")
    {
        CHECK(create_heap_deque() == 7.92);
    }
}

TEST_CASE("Classes")
{
    SUBCASE("Box volume")
    {
        CHECK(box_volume(12.0, 21.3, 13.4) == 3425.04);
    }
    SUBCASE("Operator overloading")
    {
        auto abox = Box::createBox(10, 10, 10);
        auto bbox = Box::createBox(12, 12, 12);
        CHECK(abox->volume() < bbox->volume());
    }
    SUBCASE("Inheritance")
    {
        CHECK(test_color_card() == 21.0);
    }
    SUBCASE("Polymorphism")
    {
        auto aSquare = Square { 6.0 };
        auto aCircle = Circle { 5.6 };
        CHECK(aSquare.get_area() == 36.0);
        CHECK(aCircle.get_area() > 98);
        CHECK(polymorphism() > 134.5);
    }
}
