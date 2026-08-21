//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p18.h"
using namespace std;

static void test_1() {
    DocumentIndex a,b;a.add(Text("cat"));b.add(Text("dog"));a.merge(std::move(b));REQUIRE(a.size()==2);REQUIRE(b.size()==0);
}

TEST_CASE("Question #18.1") {
    execute_test("question_18_test_1.in", test_1);
}