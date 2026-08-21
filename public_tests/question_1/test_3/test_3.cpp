//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p1.h"
using namespace std;

static void test_3() {
    IntStack source(3); source.push(10); source.push(20); IntStack copy(source);
    copy.pop(); copy.push(99); REQUIRE(source.top() == 20); REQUIRE(copy.top() == 99);
}

TEST_CASE("Question #1.3") {
    execute_test("question_1_test_3.in", test_3);
}
