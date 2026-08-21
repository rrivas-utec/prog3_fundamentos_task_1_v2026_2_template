//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p17.h"
using namespace std;

static void test_3() {
    FileBuffer a(32),b(4);b=std::move(a);REQUIRE(b.size()==32);REQUIRE(a.size()==0);
}

TEST_CASE("Question #17.3") {
    execute_test("question_17_test_3.in", test_3);
}
