#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("test gpa_to_letter_grade function")
{
    REQUIRE(gpa_to_letter_grade(3.5) == "A");
    REQUIRE(gpa_to_letter_grade(3.49) == "B");
    REQUIRE(gpa_to_letter_grade(2.0) == "C");
    REQUIRE(gpa_to_letter_grade(1.99) == "D");
    REQUIRE(gpa_to_letter_grade(0.99) == "F");
    REQUIRE(gpa_to_letter_grade(4.0) == "A");
    REQUIRE(gpa_to_letter_grade(2.99) == "C");
    REQUIRE(gpa_to_letter_grade(-1.0) == "Invalid GPA");
}