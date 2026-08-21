//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p9.h"
using namespace std;

static void test_4() {
    Polynomial a(3);a.coefficient(2)=2;a.coefficient(3)=4;REQUIRE(a.derivative().evaluate(-1)==8);
}

TEST_CASE("Question #9.4") {
    execute_test("question_9_test_4.in", test_4);
}