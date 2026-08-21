//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p16.h"
using namespace std;

static void test_2() {
    AdjacencyMatrix a(3);a.connect(0,1);a.connect(1,2);AdjacencyMatrix b=a.transposed();REQUIRE(b.connected(1,0));REQUIRE(b.connected(2,1));
}

TEST_CASE("Question #16.2") {
    execute_test("question_16_test_2.in", test_2);
}