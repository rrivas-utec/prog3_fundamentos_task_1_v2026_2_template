//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p11.h"
using namespace std;

static void test_1() {
    ScoreList a; REQUIRE(a.size()==0);
}

TEST_CASE("Question #11.1") {
    execute_test("question_11_test_1.in", test_1);
}