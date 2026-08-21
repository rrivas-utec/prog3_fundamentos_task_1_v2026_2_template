//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p8.h"
using namespace std;

static void test_3() {
    IntMatrix a(4,1),b(3,2);b=std::move(a);REQUIRE(b.rows()==4);REQUIRE(b.columns()==1);
}

TEST_CASE("Question #8.3") {
    execute_test("question_8_test_3.in", test_3);
}
