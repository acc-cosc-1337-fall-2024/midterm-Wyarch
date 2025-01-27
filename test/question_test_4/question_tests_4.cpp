#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_fahrenheit")
{
	REQUIRE(77 == get_fahrenheit(25));
	REQUIRE(32 == get_fahrenheit(0));
	REQUIRE(98.6 == get_fahrenheit(37));
}
