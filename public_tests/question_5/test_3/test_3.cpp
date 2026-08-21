//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p5.h"
using namespace std;

static void test_3() {
    Name a("X");Name b(a);a.setFirst('Y');REQUIRE(std::strcmp(b.cStr(),"X")==0);
}

TEST_CASE("Question #5.3") {
    execute_test("question_5_test_3.in", test_3);
}