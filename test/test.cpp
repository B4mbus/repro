#include <catch2/catch_test_macros.hpp>

#include "repro/test.hpp"

SCENARIO("test returns 1") {
  GIVEN("test is called") {

    WHEN("test is called") {
      auto const result = repro::test();

      THEN("it returns 1") {
        REQUIRE(1 == result);
      }
    }
  }
}
