//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p4.h"
using namespace std;

static void test_3() {
    CircularQueue a(3);a.enqueue(5);a.enqueue(6);CircularQueue b(a);REQUIRE(b.dequeue()==5);REQUIRE(a.dequeue()==5);
}

TEST_CASE("Question #4.3") {
    execute_test("question_4_test_3.in", test_3);
}