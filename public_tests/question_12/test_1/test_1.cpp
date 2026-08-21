//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p12.h"
using namespace std;

static void test_1() {
    CourseRoster a;CourseRoster b(3);b=a;REQUIRE(b.size()==0);
}

TEST_CASE("Question #12.1") {
    execute_test("question_12_test_1.in", test_1);
}