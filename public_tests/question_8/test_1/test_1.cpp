//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p8.h"
using namespace std;

static void test_1() {
    IntMatrix a(2,3);IntMatrix b(std::move(a));REQUIRE(b.rows()==2);REQUIRE(b.columns()==3);REQUIRE(a.rows()==0);
}

TEST_CASE("Question #8.1") {
    execute_test("question_8_test_1.in", test_1);
}