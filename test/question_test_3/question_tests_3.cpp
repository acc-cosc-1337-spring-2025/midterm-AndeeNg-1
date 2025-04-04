#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test roll_die function")
{
    for (int i = 0; i < 10; ++i)
    {
        int result = roll_die();
        REQUIRE(result >= 1);
        REQUIRE(result <= 6);
    }
}