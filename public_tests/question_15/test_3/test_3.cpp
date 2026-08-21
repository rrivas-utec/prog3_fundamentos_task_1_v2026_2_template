//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p15.h"
using namespace std;

static void test_3() {
    TextList a(1);Text b("move");a.add(std::move(b));REQUIRE(b.empty());
}

TEST_CASE("Question #15.3") {
    execute_test("question_15_test_3.in", test_3);
}