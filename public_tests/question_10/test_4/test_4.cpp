//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p10.h"
using namespace std;

static void test_4() {
    GrayImage a(1,1),b(1,1);a.at(0,0)=81;b=std::move(a);REQUIRE(b.at(0,0)==81);REQUIRE(a.empty());
}

TEST_CASE("Question #10.4") {
    execute_test("question_10_test_4.in", test_4);
}
