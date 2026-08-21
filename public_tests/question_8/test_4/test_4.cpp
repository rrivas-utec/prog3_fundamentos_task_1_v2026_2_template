//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p8.h"
using namespace std;

static void test_4() {
    IntMatrix a(2,2);a=std::move(a);REQUIRE(a.rows()==2);
}

TEST_CASE("Question #8.4") {
    execute_test("question_8_test_4.in", test_4);
}
