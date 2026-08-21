//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p17.h"
using namespace std;

static void test_4() {
    FileBuffer a(64);a=std::move(a);REQUIRE(a.size()==64);
}

TEST_CASE("Question #17.4") {
    execute_test("question_17_test_4.in", test_4);
}