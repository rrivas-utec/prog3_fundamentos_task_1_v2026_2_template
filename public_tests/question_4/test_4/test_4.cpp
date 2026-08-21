//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p4.h"
using namespace std;

static void test_4() {
    CircularQueue a(4);for(int i=1;i<=4;++i)a.enqueue(i);a.dequeue();a.dequeue();a.enqueue(5);a.enqueue(6);CircularQueue b(a);REQUIRE(b.dequeue()==3);REQUIRE(b.dequeue()==4);REQUIRE(b.dequeue()==5);REQUIRE(b.dequeue()==6);
}

TEST_CASE("Question #4.4") {
    execute_test("question_4_test_4.in", test_4);
}