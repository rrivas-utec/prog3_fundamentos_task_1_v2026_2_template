//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p9.h"
using namespace std;

static void test_1() {
    Polynomial constant(0); constant.coefficient(0)=8; Polynomial derived=constant.derivative();
    REQUIRE(derived.evaluate(-2)==0);
}

TEST_CASE("Question #9.1") {
    execute_test("question_9_test_1.in", test_1);
}
