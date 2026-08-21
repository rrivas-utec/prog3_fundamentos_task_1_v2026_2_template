//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p17.h"
using namespace std;

static void test_1() {
    static_assert(!std::is_copy_constructible_v<FileBuffer>); static_assert(!std::is_copy_assignable_v<FileBuffer>); SUCCEED();
}

TEST_CASE("Question #17.1") {
    execute_test("question_17_test_1.in", test_1);
}