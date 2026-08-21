//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p14.h"
using namespace std;

static void test_4() {
    TaskList a;a.add(Text("a"));a.complete(0);TaskList b=a.extractCompleted();REQUIRE(a.size()==0);REQUIRE(b.size()==1);
}

TEST_CASE("Question #14.4") {
    execute_test("question_14_test_4.in", test_4);
}