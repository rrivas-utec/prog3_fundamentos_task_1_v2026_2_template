//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p18.h"
using namespace std;

static void test_3() {
    DocumentIndex a,b;a.add(Text("a"));a.add(Text("b"));b.add(Text("c"));b.add(Text("d"));a.merge(std::move(b));REQUIRE(a.size()==4);REQUIRE(std::strcmp(a.at(3).data(),"d")==0);
}

TEST_CASE("Question #18.3") {
    execute_test("question_18_test_3.in", test_3);
}
