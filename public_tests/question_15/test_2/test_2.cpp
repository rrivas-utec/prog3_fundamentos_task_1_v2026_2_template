//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p15.h"
using namespace std;

static void test_2() {
    TextList a(2);Text b("one");a.add(b);b=Text("changed");REQUIRE(std::strcmp(a.at(0).data(),"one")==0);
}

TEST_CASE("Question #15.2") {
    execute_test("question_15_test_2.in", test_2);
}
