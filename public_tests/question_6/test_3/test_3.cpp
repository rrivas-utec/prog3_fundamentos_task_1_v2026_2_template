//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p6.h"
using namespace std;

static void test_3() {
    AttendanceRecord a(2), b(2), c(2); a.mark(1,true); c=b=a;
    REQUIRE(b.isPresent(1)); REQUIRE(c.isPresent(1));
}

TEST_CASE("Question #6.3") {
    execute_test("question_6_test_3.in", test_3);
}
