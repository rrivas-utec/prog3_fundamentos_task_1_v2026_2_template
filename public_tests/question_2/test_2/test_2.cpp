//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p2.h"
using namespace std;

static void test_2() {
    GradeBook a(2); a.at(0)=10; a.at(1)=11; GradeBook b(1); b=a; b.at(0)=20; REQUIRE(a.at(0)==10);
}

TEST_CASE("Question #2.2") {
    execute_test("question_2_test_2.in", test_2);
}