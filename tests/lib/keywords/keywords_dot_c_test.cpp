/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "keywords_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;

typedef void (*not_null_catch__arg)(int);
void _not_null_catch__stub(int param1) {
    return;
}



#pragma region regression
TEST(regression, get_size_of_data_test_1)
{
    int actual = get_size_of_data({
        .x = 'c',
        .cacheline = {'a', 'c', 'b', 'b', 'c', 'a', 'c', 'c', 'a', 'c', 'c', 'a', 'c', 'c', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'b', 'c', 'c', 'c', 'c', 'c', 'a', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'a', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'a'}});
    EXPECT_EQ(256, actual);
}

TEST(regression, stop_now_test_1)
{
    stop_now(1);
}

TEST(regression, and_test_1)
{
    int actual = and_(0, 0);
    EXPECT_EQ(0, actual);
}

TEST(regression, using_test_1)
{
    int actual = using_(0);
    EXPECT_EQ(1, actual);
}

TEST(regression, different_test_1)
{
    char old[] = "ccccccccc";
    char new_[] = "ccbaccbcc";
    _Bool actual = different(old, new_);
    EXPECT_EQ(true, actual);
    char expected_old[] = {'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', '\0'};
    for (int it_361_0 = 0; it_361_0 < 10; it_361_0 ++) {
        EXPECT_EQ(expected_old[it_361_0], old[it_361_0]);
    }
    char expected_new_[] = {'c', 'c', 'b', 'a', 'c', 'c', 'b', 'c', 'c', '\0'};
    for (int it_362_0 = 0; it_362_0 < 10; it_362_0 ++) {
        EXPECT_EQ(expected_new_[it_362_0], new_[it_362_0]);
    }
}

TEST(regression, not_null_test_1)
{
    unsigned char x = 99;
    unsigned char actual = *not_null(_not_null_catch__stub, &x);
    EXPECT_EQ(99, actual);
    unsigned char expected_x = 99;
    EXPECT_EQ(expected_x, x);
}

TEST(regression, get_flag_test_1)
{
    _Bool actual = get_flag({
        .flag = false});
    EXPECT_EQ(false, actual);
}

TEST(regression, cast_test_1)
{
    __attribute__ ((aligned(128))) unsigned char x = 0;
    unsigned char actual = *cast(&x);
    EXPECT_EQ(0, actual);
}

TEST(regression, equals_test_1)
{
    _Bool actual = equals({
        .public = 0L,
        .private = 0L});
    EXPECT_EQ(true, actual);
}

TEST(regression, access_to_int_test_1)
{
    int actual = access_to_int(private_);
    EXPECT_EQ(0, actual);
}

TEST(regression, access_to_int_test_2)
{
    int actual = access_to_int(protected_);
    EXPECT_EQ(1, actual);
}

TEST(regression, access_to_int_test_3)
{
    int actual = access_to_int(public_);
    EXPECT_EQ(2, actual);
}

#pragma endregion
#pragma region error
TEST(error, stop_now_test_2)
{
    stop_now(0);
}

#pragma endregion
}