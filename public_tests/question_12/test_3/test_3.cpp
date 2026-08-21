//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p12.h"
using namespace std;

static void test_3() {
    CourseRoster a(3);a=a;REQUIRE(a.size()==3);
}

TEST_CASE("Question #12.3") {
    execute_test("question_12_test_3.in", test_3);
}