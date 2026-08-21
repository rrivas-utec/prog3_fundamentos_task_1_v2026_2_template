//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p11.h"
using namespace std;

static void test_4() {
    ScoreList a=makeSample();a.add(30);REQUIRE(a.size()==3);
}

TEST_CASE("Question #11.4") {
    execute_test("question_11_test_4.in", test_4);
}