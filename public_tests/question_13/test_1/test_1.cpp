//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p13.h"
using namespace std;

static void test_1() {
    History h;Text a("start");h.add(a);REQUIRE(h.size()==1);REQUIRE(std::strcmp(h.at(0).data(),"start")==0);
}

TEST_CASE("Question #13.1") {
    execute_test("question_13_test_1.in", test_1);
}
