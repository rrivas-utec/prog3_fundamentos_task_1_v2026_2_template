//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p12.h"
using namespace std;

static void test_2() {
    CourseRoster a(4),b;b=a;REQUIRE(b.size()==4);
}

TEST_CASE("Question #12.2") {
    execute_test("question_12_test_2.in", test_2);
}