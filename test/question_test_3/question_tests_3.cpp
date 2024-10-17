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

TEST_CASE("Test is_palindrome")
{
	REQUIRE(true == is_palindrome("abcba"));
	REQUIRE(false == is_palindrome("abc"));
	REQUIRE(true == is_palindrome("hannah"));
	REQUIRE(false == is_palindrome("hanna"));
}
