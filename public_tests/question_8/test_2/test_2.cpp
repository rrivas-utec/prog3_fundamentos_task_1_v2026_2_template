//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p8.h"
using namespace std;

static void test_2() {
    IntMatrix a(2,3),b(1,1);b=std::move(a);REQUIRE(b.rows()==2);REQUIRE(a.columns()==0);
}

TEST_CASE("Question #8.2") {
    execute_test("question_8_test_2.in", test_2);
}