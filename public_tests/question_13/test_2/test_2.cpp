//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p13.h"
using namespace std;

static void test_2() {
    History h;Text a("start");h.add(a);a=Text("changed");REQUIRE(std::strcmp(h.at(0).data(),"start")==0);
}

TEST_CASE("Question #13.2") {
    execute_test("question_13_test_2.in", test_2);
}
