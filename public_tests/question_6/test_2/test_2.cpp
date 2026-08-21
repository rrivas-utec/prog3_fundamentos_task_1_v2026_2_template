//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p6.h"
using namespace std;

static void test_2() {
    AttendanceRecord a(2), b(2); a.mark(0,true); b=a; b.mark(0,false);
    REQUIRE(a.isPresent(0)); REQUIRE_FALSE(b.isPresent(0));
}

TEST_CASE("Question #6.2") {
    execute_test("question_6_test_2.in", test_2);
}
