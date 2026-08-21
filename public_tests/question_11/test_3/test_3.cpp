//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p11.h"
using namespace std;

static void test_3() {
    ScoreList a=makeSample();REQUIRE(a.size()==2);
}

TEST_CASE("Question #11.3") {
    execute_test("question_11_test_3.in", test_3);
}
