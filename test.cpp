#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "doctest.h"
#include "Point.h"
#include "Rectangle.h"

TEST_CASE("Point class tests") {

    SUBCASE("distanceTo function") {
        Point p1(0.0, 0.0);
        Point p2(3.0, 4.0);
        REQUIRE(p1.distanceTo(p2) == 5.0);

        Point p3(1.0, 1.0);
        Point p4(1.0, 1.0);
        REQUIRE(p3.distanceTo(p4) == 0.0);

        Point p5(-1.0, -1.0);
        Point p6(1.0, 1.0);
        REQUIRE(p5.distanceTo(p6) == std::sqrt(8.0));
    }
}