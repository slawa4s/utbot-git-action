/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "struct_arrays_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;
// Some tests for function 'index_of_needed_struct' were skipped, as execution of function is out of timeout.

// Some tests for function 'index_of_struct_with_equal_fields' were skipped, as execution of function is out of timeout.



#pragma region regression
TEST(regression, index_of_needed_struct_test_1)
{
    struct CharAndInt arr[10] = {{
        .c = 'h',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'c',
        .x = 128}, {
        .c = 'c',
        .x = 0}, {
        .c = 'a',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'b',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'c',
        .x = 0}};
    int actual = index_of_needed_struct(arr);
    EXPECT_EQ(2, actual);
    struct CharAndInt expected_arr[10] = {{
        .c = 'h',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'c',
        .x = 128}, {
        .c = 'c',
        .x = 0}, {
        .c = 'a',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'b',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'c',
        .x = 0}};
    for (int it_328_0 = 0; it_328_0 < 10; it_328_0 ++) {
        EXPECT_EQ(expected_arr[it_328_0].c, arr[it_328_0].c);
        EXPECT_EQ(expected_arr[it_328_0].x, arr[it_328_0].x);
    }
}

TEST(regression, index_of_needed_struct_test_2)
{
    struct CharAndInt arr[10] = {{
        .c = 'h',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'b',
        .x = 0}, {
        .c = 's',
        .x = 0}, {
        .c = 'p',
        .x = 0}, {
        .c = 'a',
        .x = 0}, {
        .c = 'g',
        .x = 0}, {
        .c = 'k',
        .x = 0}, {
        .c = 's',
        .x = 0}, {
        .c = 'h',
        .x = 0}};
    int actual = index_of_needed_struct(arr);
    EXPECT_EQ(-1, actual);
    struct CharAndInt expected_arr[10] = {{
        .c = 'h',
        .x = 0}, {
        .c = 'c',
        .x = 0}, {
        .c = 'b',
        .x = 0}, {
        .c = 's',
        .x = 0}, {
        .c = 'p',
        .x = 0}, {
        .c = 'a',
        .x = 0}, {
        .c = 'g',
        .x = 0}, {
        .c = 'k',
        .x = 0}, {
        .c = 's',
        .x = 0}, {
        .c = 'h',
        .x = 0}};
    for (int it_329_0 = 0; it_329_0 < 10; it_329_0 ++) {
        EXPECT_EQ(expected_arr[it_329_0].c, arr[it_329_0].c);
        EXPECT_EQ(expected_arr[it_329_0].x, arr[it_329_0].x);
    }
}

TEST(regression, index_of_struct_with_equal_fields_test_1)
{
    struct Trio arr[10] = {{
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 1LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 1LL,
        .c = 0}, {
        .a = 0,
        .b = 2LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 1LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}};
    int actual = index_of_struct_with_equal_fields(arr);
    EXPECT_EQ(-1, actual);
    struct Trio expected_arr[10] = {{
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 1LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 1LL,
        .c = 0}, {
        .a = 0,
        .b = 2LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}, {
        .a = 0,
        .b = 1LL,
        .c = 0}, {
        .a = 0,
        .b = 8LL,
        .c = 0}};
    for (int it_330_0 = 0; it_330_0 < 10; it_330_0 ++) {
        EXPECT_EQ(expected_arr[it_330_0].a, arr[it_330_0].a);
        EXPECT_EQ(expected_arr[it_330_0].b, arr[it_330_0].b);
        EXPECT_EQ(expected_arr[it_330_0].c, arr[it_330_0].c);
    }
}

#pragma endregion
}
