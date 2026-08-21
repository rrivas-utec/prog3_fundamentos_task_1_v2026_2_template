//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p10.h"
using namespace std;

static void test_2() {
    GrayImage a(2,2);
    a.at(0,0)=0;a.at(1,1)=255;
    GrayImage b=a.inverted();
    REQUIRE(b.at(0,0)==255);
    REQUIRE(b.at(1,1)==0);
}

TEST_CASE("Question #10.2") {
    execute_test("question_10_test_2.in", test_2);
}
