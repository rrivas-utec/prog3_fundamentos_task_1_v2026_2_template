//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p14.h"
using namespace std;

static void test_1() {
    TaskList a;a.add(Text("code"));a.add(Text("test"));a.complete(1);TaskList b=a.extractCompleted();REQUIRE(a.size()==1);REQUIRE(std::strcmp(b.at(0).title.data(),"test")==0);
}

TEST_CASE("Question #14.1") {
    execute_test("question_14_test_1.in", test_1);
}
