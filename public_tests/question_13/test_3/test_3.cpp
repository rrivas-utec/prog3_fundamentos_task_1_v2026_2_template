//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p13.h"
using namespace std;

static void test_3() {
    History h;Text a("move");h.add(std::move(a));REQUIRE(a.empty());
}

TEST_CASE("Question #13.3") {
    execute_test("question_13_test_3.in", test_3);
}