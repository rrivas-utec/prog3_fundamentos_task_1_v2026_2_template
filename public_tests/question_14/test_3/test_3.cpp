//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p14.h"
using namespace std;

static void test_3() {
    TaskList a;a.add(Text("a"));a.add(Text("b"));a.add(Text("c"));a.complete(0);a.complete(2);TaskList b=a.extractCompleted();REQUIRE(a.size()==1);REQUIRE(b.size()==2);
}

TEST_CASE("Question #14.3") {
    execute_test("question_14_test_3.in", test_3);
}
