//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p5.h"
using namespace std;

static void test_4() {
    const Name a("Roberto");
    const Name b(a);
    const Name c(b);
    c.setFirst('L');
    REQUIRE(std::strcmp(a.cStr(),"Roberto")==0);
    REQUIRE(std::strcmp(c.cStr(),"Loberto")==0);
}

TEST_CASE("Question #5.4") {
    execute_test("question_5_test_4.in", test_4);
}