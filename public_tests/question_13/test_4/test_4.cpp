//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p13.h"
using namespace std;

static void test_4() {
    History h;h.add(Text("one"));h.add(Text("two"));h.add(Text("three"));REQUIRE(h.size()==3);REQUIRE(std::strcmp(h.at(2).data(),"three")==0);
}

TEST_CASE("Question #13.4") {
    execute_test("question_13_test_4.in", test_4);
}
