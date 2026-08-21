//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p18.h"
using namespace std;

static void test_4() {
    DocumentIndex a, b;
    a.add(Text("one"));
    b.add(Text("two"));
    a.merge(std::move(b));
    b.add(Text("new"));
    REQUIRE(std::strcmp(a.at(1).data(),"two")==0);
    REQUIRE(std::strcmp(b.at(0).data(),"new")==0);
}

TEST_CASE("Question #18.4") {
    execute_test("question_18_test_4.in", test_4);
}
