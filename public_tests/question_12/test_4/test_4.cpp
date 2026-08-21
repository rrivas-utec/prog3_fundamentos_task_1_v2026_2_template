//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p12.h"
using namespace std;

static void test_4() {
    CourseRoster a(2),b(5),c;c=b=a;REQUIRE(c.size()==2);
}

TEST_CASE("Question #12.4") {
    execute_test("question_12_test_4.in", test_4);
}