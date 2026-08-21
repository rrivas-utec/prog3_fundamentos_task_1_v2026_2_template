//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
using namespace std;

static void test_3() {
    IntBuffer b(1);
    b.pushBack(1);
    b.pushBack(2);
    REQUIRE(b.size()==2);
    REQUIRE(b.at(0)==1);
}

TEST_CASE("Question #3.3") {
    execute_test("question_3_test_3.in", test_3);
}