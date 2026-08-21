//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p7.h"
using namespace std;

static void test_1() {
    Text a; REQUIRE(a.empty());
}

TEST_CASE("Question #7.1") {
    execute_test("question_7_test_1.in", test_1);
}
