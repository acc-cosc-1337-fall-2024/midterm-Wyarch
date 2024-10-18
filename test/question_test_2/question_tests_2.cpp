#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify get_primes")
{
	vector<int> expected = {2,3,5,7};
	REQUIRE(expected == get_primes(10));
	expected = {2,3,5,7,11,13};
	REQUIRE(expected == get_primes(15));
	expected = {2,3,5,7,11,13,17,19,23,29};
	REQUIRE(expected == get_primes(30));
	expected = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	REQUIRE(expected == get_primes(50));
}
