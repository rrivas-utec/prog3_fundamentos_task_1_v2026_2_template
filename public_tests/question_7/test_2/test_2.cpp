//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p7.h"
using namespace std;

static void test_2() {
    Text a("UTEC");Text b(std::move(a));REQUIRE(std::strcmp(b.data(),"UTEC")==0);REQUIRE(a.empty());
}

TEST_CASE("Question #7.2") {
    execute_test("question_7_test_2.in", test_2);
}
