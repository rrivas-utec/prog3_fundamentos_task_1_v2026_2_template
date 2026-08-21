//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p14.h"
using namespace std;

static void test_2() {
    TaskList a;a.add(Text("a"));TaskList b=a.extractCompleted();REQUIRE(a.size()==1);REQUIRE(b.size()==0);
}

TEST_CASE("Question #14.2") {
    execute_test("question_14_test_2.in", test_2);
}