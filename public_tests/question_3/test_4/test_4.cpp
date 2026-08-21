//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"
using namespace std;

static void test_4() {
    IntBuffer b(1); for(int i=0;i<9;++i)b.pushBack(-3*i); REQUIRE(b.size()==9); REQUIRE(b.at(8)==-24);
}

TEST_CASE("Question #3.4") {
    execute_test("question_3_test_4.in", test_4);
}