#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify decimal_to_binary")
{
	//REQUIRE("00001010" == decimal_to_binary(10));
	//REQUIRE("10101010" == decimal_to_binary(170));
	REQUIRE("11111111" == decimal_to_binary(255));
}
