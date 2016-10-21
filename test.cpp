//
// Created by Raymond Machira on 10/20/16.
//

//#include "test.h"
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "UserInteraction.h"
#include <string>


TEST_CASE("User Interaction", "[User Interaction]") {
    stringstream values;
    values.str("4\n3");
    stringstream output;
    UserInteraction object(values, output);
    object.interactWithUser();

    REQUIRE(output.str() == "What is the value of X?: What is the value of Y?: 12");
}


TEST_CASE("Products", "hygiene products") {
    stringstream values;
    values.str("4\n3");
    stringstream output;
    UserInteraction object(values, output);
    object.interactWithUser();

    //should return positive values if both are positive
    REQUIRE(object.product(3,4) == 12);
    REQUIRE(object.product(-3,4) == -12);
}