//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p9.h"
using namespace std;

static void test_3() {
    Polynomial a(2);a.coefficient(0)=1;a.coefficient(1)=2;a.coefficient(2)=3;Polynomial b=a.derivative();REQUIRE(a.evaluate(2)==17);REQUIRE(b.evaluate(2)==14);
}

TEST_CASE("Question #9.3") {
    execute_test("question_9_test_3.in", test_3);
}