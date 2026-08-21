//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p17.h"
using namespace std;

static void test_2() {
    FileBuffer a(128);FileBuffer b(std::move(a));REQUIRE(b.size()==128);REQUIRE(a.size()==0);
}

TEST_CASE("Question #17.2") {
    execute_test("question_17_test_2.in", test_2);
}