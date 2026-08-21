//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p18.h"
using namespace std;

static void test_2() {
    DocumentIndex a,b;a.add(Text("cat"));a.merge(std::move(b));REQUIRE(a.size()==1);REQUIRE(b.size()==0);
}

TEST_CASE("Question #18.2") {
    execute_test("question_18_test_2.in", test_2);
}