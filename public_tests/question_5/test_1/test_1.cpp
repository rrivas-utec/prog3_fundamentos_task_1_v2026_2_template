//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p5.h"
using namespace std;

static void test_1() {
    Name a("Ana"); REQUIRE(std::strcmp(a.cStr(),"Ana")==0);
}

TEST_CASE("Question #5.1") {
    execute_test("question_5_test_1.in", test_1);
}