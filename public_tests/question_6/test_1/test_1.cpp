//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p6.h"
using namespace std;

static void test_1() {
    AttendanceRecord a(3), b(1); a.mark(0,true); a.mark(2,true); b=a;
    REQUIRE(b.isPresent(0)); REQUIRE_FALSE(b.isPresent(1)); REQUIRE(b.isPresent(2));
}

TEST_CASE("Question #6.1") {
    execute_test("question_6_test_1.in", test_1);
}
