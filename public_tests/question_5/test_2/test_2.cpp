//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p5.h"
using namespace std;

static void test_2() {
    Name a("Ana");Name b(a);b.setFirst('L');REQUIRE(std::strcmp(a.cStr(),"Ana")==0);REQUIRE(std::strcmp(b.cStr(),"Lna")==0);
}

TEST_CASE("Question #5.2") {
    execute_test("question_5_test_2.in", test_2);
}