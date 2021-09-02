//
// Created by Alessio Saltarin on 02/09/21.
//

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "arrayloops.h"

TEST_CASE("Classical Loop") {
    CHECK(classicalloop() == 215);
}
