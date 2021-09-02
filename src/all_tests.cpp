//
// Created by Alessio Saltarin on 02/09/21.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "arrayloops.h"
#include "pointersreferences.h"

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


