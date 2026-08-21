//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p16.h"
using namespace std;

static void test_1() {
    AdjacencyMatrix a(3);a.connect(0,2);AdjacencyMatrix b=a.transposed();REQUIRE(b.connected(2,0));
}

TEST_CASE("Question #16.1") {
    execute_test("question_16_test_1.in", test_1);
}
