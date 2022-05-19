/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "floating_point_test.h"

#include "gtest/gtest.h"
#include "math.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, get_double_sign_test_1)
{
    int actual = get_double_sign(-1.823504e-303);
    EXPECT_EQ(-1, actual);
}

TEST(regression, get_double_sign_test_2)
{
    int actual = get_double_sign(0.000000e+00);
    EXPECT_EQ(0, actual);
}

TEST(regression, get_double_sign_test_3)
{
    int actual = get_double_sign(1.823148e-303);
    EXPECT_EQ(1, actual);
}


TEST(regression, is_close_test_1)
{
    int actual = is_close(1.000000e+00, 0);
    EXPECT_EQ(0, actual);
}

TEST(regression, is_close_test_2)
{
    int actual = is_close(NAN, 0);
    EXPECT_EQ(0, actual);
}

TEST(regression, is_close_test_3)
{
    int actual = is_close(0.000000e+00, 0);
    EXPECT_EQ(1, actual);
}


TEST(regression, long_double_arith_test_1)
{
    float actual = long_double_arith(0.000000e+00);
    EXPECT_NEAR(3.500000e+00, actual, utbot_abs_error);
}

TEST(regression, long_double_arith_test_2)
{
    float actual = long_double_arith(2.105000e+00);
    EXPECT_NEAR(1.000000e+00, actual, utbot_abs_error);
}


TEST(regression, array_max_test_1)
{
    __attribute__ ((aligned(1))) float arr[10] = {0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    int actual = array_max(arr);
    EXPECT_EQ(0, actual);
    float expected_arr[10] = {0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_NEAR(expected_arr[it_3_0], arr[it_3_0], utbot_abs_error);
    }
}

TEST(regression, array_max_test_2)
{
    __attribute__ ((aligned(1))) float arr[10] = {-4.031740e+00, -4.250123e+00, -2.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    int actual = array_max(arr);
    EXPECT_EQ(-1, actual);
    float expected_arr[10] = {-4.031740e+00, -4.250123e+00, -2.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_NEAR(expected_arr[it_3_0], arr[it_3_0], utbot_abs_error);
    }
}

TEST(regression, array_max_test_3)
{
    __attribute__ ((aligned(1))) float arr[10] = {-4.125124e+00, -1.289101e-01, -3.821202e-06, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    int actual = array_max(arr);
    EXPECT_EQ(-1, actual);
    float expected_arr[10] = {-4.125124e+00, -1.289101e-01, -3.821202e-06, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_NEAR(expected_arr[it_3_0], arr[it_3_0], utbot_abs_error);
    }
}

TEST(regression, array_max_test_4)
{
    __attribute__ ((aligned(1))) float arr[10] = {-2.015870e+00, -4.031739e+00, -3.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    int actual = array_max(arr);
    EXPECT_EQ(-1, actual);
    float expected_arr[10] = {-2.015870e+00, -4.031739e+00, -3.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_NEAR(expected_arr[it_3_0], arr[it_3_0], utbot_abs_error);
    }
}

TEST(regression, array_max_test_5)
{
    __attribute__ ((aligned(1))) float arr[10] = {3.814698e-06, -0.000000e+00, -0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    int actual = array_max(arr);
    EXPECT_EQ(1, actual);
    float expected_arr[10] = {3.814698e-06, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00, 0.000000e+00};
    for (int it_3_0 = 0; it_3_0 < 10; it_3_0 ++) {
        EXPECT_NEAR(expected_arr[it_3_0], arr[it_3_0], utbot_abs_error);
    }
}


TEST(regression, fp_array_test_1)
{
    struct FParray actual = fp_array(0);
    struct FParray expected = {{1.230000e+01, 3.210000e+01}};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        EXPECT_NEAR(expected.data[it_5_0], actual.data[it_5_0], utbot_abs_error);
    }
}

TEST(regression, fp_array_test_2)
{
    struct FParray actual = fp_array(-1);
    struct FParray expected = {{1.230000e+00, 3.210000e+00}};
    for (int it_5_0 = 0; it_5_0 < 2; it_5_0 ++) {
        EXPECT_NEAR(expected.data[it_5_0], actual.data[it_5_0], utbot_abs_error);
    }
}

#pragma endregion
}
