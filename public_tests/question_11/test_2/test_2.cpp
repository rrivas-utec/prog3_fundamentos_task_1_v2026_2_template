//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p11.h"
using namespace std;

static void test_2() {
    ScoreList a;a.add(10);a.add(20);REQUIRE(a.size()==2);
}

TEST_CASE("Question #11.2") {
    execute_test("question_11_test_2.in", test_2);
}