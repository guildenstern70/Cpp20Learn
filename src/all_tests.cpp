//
// C++ 20 Learn
// Copyright (C) 2021, Alessio Saltarin
//
// See LICENSE
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "arrayloops.h"
#include "pointersreferences.h"
#include "functions.h"
#include "optional.h"
#include "templates.h"
#include "classes.h"

TEST_CASE("Loops")
{
    SUBCASE("Classical")
    {
        CHECK(classicalloop() == 215);
    }
    SUBCASE("Range Based")
    {
        CHECK(rangebasedloop() == 215);
    }
}

TEST_CASE("Pointers")
{
    SUBCASE("Normal")
    {
        CHECK(normalpointers() == 317138913L);
    }
}

TEST_CASE("Functions")
{
    SUBCASE("Output Parameters")
    {
        CHECK(getstringlen() == 16);
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
        CHECK(findoccurrence("E FEDEL NON LEDE FE", "LEDE") == "LEDE");
    }
}

TEST_CASE("Templates")
{
    SUBCASE("Function template")
    {
        CHECK(tellmewhichislarger(37.0, 33.2) == 37.0);
    }
}

TEST_CASE("Classes")
{
    SUBCASE("Box volume")
    {
        CHECK(boxvolume(12.0, 21.3, 13.4) == 3425.04);
    }
}


