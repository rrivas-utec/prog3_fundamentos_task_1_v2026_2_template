//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p2.h"
using namespace std;

static void test_3() {
    GradeBook a(2); a.at(0)=13; a=a; REQUIRE(a.at(0)==13);
}

TEST_CASE("Question #2.3") {
    execute_test("question_2_test_3.in", test_3);
}