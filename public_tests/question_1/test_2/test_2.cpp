//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p1.h"
using namespace std;

static void test_2() {
    IntStack stack(3); stack.push(1); stack.push(2); stack.push(3);
    stack.pop(); REQUIRE(stack.top() == 2);
}

TEST_CASE("Question #1.2") {
    execute_test("question_1_test_2.in", test_2);
}
