/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "main_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, buggy_function1_test_1)
{
    buggy_function1(42);
}


TEST(regression, buggy_function2_test_1)
{
    buggy_function2(0);
}


TEST(regression, buggy_function3_test_1)
{
    int actual = buggy_function3(1);
    EXPECT_EQ(1, actual);
}


TEST(regression, foo_test_1)
{
    int actual = foo(13);
    EXPECT_EQ(13, actual);
}


TEST(regression, ritasexample_test_1)
{
    int actual = ritasexample(13);
    EXPECT_EQ(13, actual);
}


TEST(regression, main_test_1)
{
    int actual = main();
    EXPECT_EQ(0, actual);
}

#pragma endregion
#pragma region error
TEST(error, buggy_function1_test_2)
{
    buggy_function1(0);
}

TEST(error, buggy_function2_test_2)
{
    buggy_function2(16);
}

TEST(error, buggy_function3_test_2)
{
    buggy_function3(0);
}

TEST(error, foo_test_2)
{
    foo(0);
}

TEST(error, ritasexample_test_2)
{
    ritasexample(0);
}

#pragma endregion
}