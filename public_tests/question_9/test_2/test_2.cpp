//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p9.h"
using namespace std;

static void test_2() {
    Polynomial a(1);a.coefficient(0)=3;a.coefficient(1)=5;REQUIRE(a.derivative().evaluate(10)==5);
}

TEST_CASE("Question #9.2") {
    execute_test("question_9_test_2.in", test_2);
}