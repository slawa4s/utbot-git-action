/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "static_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;
// Function 'inline_sum' was skipped, as inline function without static or extern modifier is not supported by now



#pragma region regression

TEST(regression, static_simple_test_1)
{
    x = 0;
    int actual = static_simple(0);
    EXPECT_EQ(0, actual);
    int expected_x = 0;
    EXPECT_EQ(expected_x, x);
}

TEST(regression, static_simple_test_2)
{
    x = 1;
    int actual = static_simple(-1);
    EXPECT_EQ(0, actual);
    int expected_x = 1;
    EXPECT_EQ(expected_x, x);
}

TEST(regression, static_simple_test_3)
{
    x = -10;
    int actual = static_simple(-10);
    EXPECT_EQ(0, actual);
    int expected_x = -10;
    EXPECT_EQ(expected_x, x);
}


TEST(regression, static_accept_local_struct_test_1)
{
    int actual = static_accept_local_struct({0, 0}, 9);
    EXPECT_EQ(0, actual);
}

TEST(regression, static_accept_local_struct_test_2)
{
    int actual = static_accept_local_struct({0, 0}, 0);
    EXPECT_EQ(0, actual);
}

TEST(regression, static_accept_local_struct_test_3)
{
    int actual = static_accept_local_struct({0, 0}, 1);
    EXPECT_EQ(0, actual);
}


TEST(regression, static_return_local_struct_test_1)
{
    struct StaticStruct actual = static_return_local_struct(0, 0);
    struct StaticStruct expected = {0, 0};
    EXPECT_EQ(actual.x, expected.x);
    EXPECT_EQ(actual.y, expected.y);
}


TEST(regression, static_inline_sum_test_1)
{
    int actual = static_inline_sum(0, 0);
    EXPECT_EQ(0, actual);
}

#pragma endregion
}
