//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p2.h"
using namespace std;

static void test_4() {
    GradeBook a(2),b(1),c(1); a.at(1)=19; c=b=a; b.at(1)=20; REQUIRE(c.at(1)==19);
}

TEST_CASE("Question #2.4") {
    execute_test("question_2_test_4.in", test_4);
}