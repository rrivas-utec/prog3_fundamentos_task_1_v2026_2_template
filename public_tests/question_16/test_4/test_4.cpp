//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p16.h"
using namespace std;

static void test_4() {
    AdjacencyMatrix a(2);a.connect(0,1);AdjacencyMatrix b=a.transposed().transposed();REQUIRE(b.connected(0,1));
}

TEST_CASE("Question #16.4") {
    execute_test("question_16_test_4.in", test_4);
}