//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p10.h"
using namespace std;

static void test_1() {
    GrayImage a(1,1);a.at(0,0)=10;GrayImage b=a.inverted();REQUIRE(a.at(0,0)==10);REQUIRE(b.at(0,0)==245);
}

TEST_CASE("Question #10.1") {
    execute_test("question_10_test_1.in", test_1);
}
