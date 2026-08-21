//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p6.h"
using namespace std;

static void test_4() {
    AttendanceRecord a(2);a.mark(0,true);a=a;REQUIRE(a.isPresent(0));
}

TEST_CASE("Question #6.4") {
    execute_test("question_6_test_4.in", test_4);
}