//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p4.h"
using namespace std;

static void test_2() {
    CircularQueue a(3);
    a.enqueue(1);
    a.enqueue(2);
    a.enqueue(3);
    a.dequeue();
    a.enqueue(4);
    CircularQueue b(a);
    REQUIRE(b.dequeue()==2);
    REQUIRE(b.dequeue()==3);
    REQUIRE(b.dequeue()==4);
}

TEST_CASE("Question #4.2") {
    execute_test("question_4_test_2.in", test_2);
}