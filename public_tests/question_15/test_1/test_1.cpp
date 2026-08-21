//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p15.h"
using namespace std;

static void test_1() {
    TextList a(2);Text b("one");a.add(b);REQUIRE(a.size()==1);
}

TEST_CASE("Question #15.1") {
    execute_test("question_15_test_1.in", test_1);
}