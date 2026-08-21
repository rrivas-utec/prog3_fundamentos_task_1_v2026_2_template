//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p7.h"
using namespace std;

static void test_3() {
    Text a("new"),b("old");b=std::move(a);REQUIRE(std::strcmp(b.data(),"new")==0);REQUIRE(a.empty());
}

TEST_CASE("Question #7.3") {
    execute_test("question_7_test_3.in", test_3);
}
