//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p2.h"
using namespace std;

static void test_1() {
    GradeBook source(2); source.at(0)=15; source.at(1)=18.5; GradeBook target(1);
    target=source; REQUIRE(target.at(0)==15); REQUIRE(target.at(1)==18.5);
}

TEST_CASE("Question #2.1") {
    execute_test("question_2_test_1.in", test_1);
}
