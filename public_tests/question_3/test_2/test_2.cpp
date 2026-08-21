//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
using namespace std;

static void test_2() {
    IntBuffer b(2); b.pushBack(3); b.pushBack(6); REQUIRE(b.at(1)==6);
}

TEST_CASE("Question #3.2") {
    execute_test("question_3_test_2.in", test_2);
}