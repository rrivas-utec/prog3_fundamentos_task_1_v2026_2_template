//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p7.h"
using namespace std;

static void test_4() {
    Text a("safe");a=std::move(a);REQUIRE(std::strcmp(a.data(),"safe")==0);
}

TEST_CASE("Question #7.4") {
    execute_test("question_7_test_4.in", test_4);
}
