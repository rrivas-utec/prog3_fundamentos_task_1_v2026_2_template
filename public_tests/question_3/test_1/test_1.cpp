//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
using namespace std;

static void test_1() {
    IntBuffer b(2); b.pushBack(8); REQUIRE(b.size()==1); REQUIRE(b.at(0)==8);
}

TEST_CASE("Question #3.1") {
    execute_test("question_3_test_1.in", test_1);
}