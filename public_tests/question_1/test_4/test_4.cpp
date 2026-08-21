//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p1.h"
using namespace std;

static void test_4() {
    IntStack empty(1); IntStack copy(empty); REQUIRE(copy.empty()); copy.push(4);
    REQUIRE(empty.empty()); REQUIRE(copy.top() == 4);
}

TEST_CASE("Question #1.4") {
    execute_test("question_1_test_4.in", test_4);
}
