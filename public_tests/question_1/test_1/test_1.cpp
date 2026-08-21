//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p1.h"
using namespace std;

static void test_1() {
    IntStack stack(2); REQUIRE(stack.empty()); stack.push(7);
    REQUIRE_FALSE(stack.empty()); REQUIRE(stack.top() == 7);
}

TEST_CASE("Question #1.1") {
    execute_test("question_1_test_1.in", test_1);
}
