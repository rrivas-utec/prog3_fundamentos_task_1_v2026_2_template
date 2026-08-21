//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p4.h"
using namespace std;

static void test_1() {
    CircularQueue a(3);
    a.enqueue(1);
    a.enqueue(2);
    CircularQueue b(a);
    REQUIRE(b.dequeue()==1);
    REQUIRE(b.dequeue()==2);
}

TEST_CASE("Question #4.1") {
    execute_test("question_4_test_1.in", test_1);
}