cmake_minimum_required(VERSION 3.16)
project(prog3_fundamentos_task_1_v2026_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE student_sources CONFIGURE_DEPENDS src/*.cpp src/*.cc src/*.cxx)
add_executable(${PROJECT_NAME} main.cpp ${student_sources})
target_include_directories(${PROJECT_NAME} PRIVATE include src)

function(resolve_case_insensitive expected output)
    file(GLOB_RECURSE candidates CONFIGURE_DEPENDS RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}"
        "include/*" "src/*")
    string(TOLOWER "${expected}" expected_lower)
    set(matches "")
    foreach(candidate IN LISTS candidates)
        string(TOLOWER "${candidate}" candidate_lower)
        if(candidate_lower STREQUAL expected_lower)
            list(APPEND matches "${candidate}")
        endif()
    endforeach()
    list(LENGTH matches match_count)
    if(match_count GREATER 1)
        message(FATAL_ERROR "Ambiguous submission file for ${expected}: ${matches}")
    endif()
    if(match_count EQUAL 1)
        list(GET matches 0 match)
        set(${output} "${match}" PARENT_SCOPE)
    else()
        set(${output} "" PARENT_SCOPE)
    endif()
endfunction()

function(add_public_question question header source)
    resolve_case_insensitive("include/${header}" resolved_header)
    resolve_case_insensitive("src/${source}" resolved_source)
    file(GLOB_RECURSE test_sources CONFIGURE_DEPENDS
        "public_tests/question_${question}/test_*/*.cpp")
    if(NOT test_sources)
        message(FATAL_ERROR "No se encontraron pruebas publicas para la pregunta ${question}")
    endif()
    add_executable(public_test_question_${question} EXCLUDE_FROM_ALL
        public_tests/test-main.cpp ${test_sources} ${resolved_source})
    target_include_directories(public_test_question_${question} PRIVATE
        include src tools/catch public_tests)
    add_test(NAME public_test_question_${question} COMMAND public_test_question_${question})
endfunction()

function(add_public_sanitizer_check)
    if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang" AND UNIX AND NOT APPLE)
        add_executable(public_test_asan_leaksan EXCLUDE_FROM_ALL
            public_tests/asan_leaksan.cpp ${student_sources})
        target_include_directories(public_test_asan_leaksan PRIVATE include src)
        target_compile_options(public_test_asan_leaksan PRIVATE
            -g -O1 -fsanitize=address,leak,undefined -fno-omit-frame-pointer)
        target_link_options(public_test_asan_leaksan PRIVATE
            -fsanitize=address,leak,undefined)
        add_test(NAME public_test_asan_leaksan COMMAND public_test_asan_leaksan)
        set_tests_properties(public_test_asan_leaksan PROPERTIES
            TIMEOUT 30
            ENVIRONMENT "ASAN_OPTIONS=detect_leaks=1:halt_on_error=1;UBSAN_OPTIONS=halt_on_error=1")
    else()
        add_custom_target(public_test_asan_leaksan
            COMMAND ${CMAKE_COMMAND} -E echo
                "ASan/LSan esta disponible solo con GCC o Clang en Linux.")
    endif()
endfunction()

enable_testing()
add_public_question(1 "p1.h" "p1.cpp")
add_public_question(2 "p2.h" "p2.cpp")
add_public_question(3 "p3.h" "p3.cpp")
add_public_question(4 "p4.h" "p4.cpp")
add_public_question(5 "p5.h" "p5.cpp")
add_public_question(6 "p6.h" "p6.cpp")
add_public_question(7 "p7.h" "p7.cpp")
add_public_question(8 "p8.h" "p8.cpp")
add_public_question(9 "p9.h" "p9.cpp")
add_public_question(10 "p10.h" "p10.cpp")
add_public_question(11 "p11.h" "p11.cpp")
add_public_question(12 "p12.h" "p12.cpp")
add_public_question(13 "p13.h" "p13.cpp")
add_public_question(14 "p14.h" "p14.cpp")
add_public_question(15 "p15.h" "p15.cpp")
add_public_question(16 "p16.h" "p16.cpp")
add_public_question(17 "p17.h" "p17.cpp")
add_public_question(18 "p18.h" "p18.cpp")
add_public_sanitizer_check()
add_custom_target(public_tests_all DEPENDS public_test_question_1 public_test_question_2 public_test_question_3 public_test_question_4 public_test_question_5 public_test_question_6 public_test_question_7 public_test_question_8 public_test_question_9 public_test_question_10 public_test_question_11 public_test_question_12 public_test_question_13 public_test_question_14 public_test_question_15 public_test_question_16 public_test_question_17 public_test_question_18)
