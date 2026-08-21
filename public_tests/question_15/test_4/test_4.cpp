//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p15.h"
using namespace std;

static void test_4() {
    TextList a(1);a.add(Text("one"));a.add(Text("two"));a.add(Text("three"));REQUIRE(a.size()==3);REQUIRE(std::strcmp(a.at(2).data(),"three")==0);
}

TEST_CASE("Question #15.4") {
    execute_test("question_15_test_4.in", test_4);
}
