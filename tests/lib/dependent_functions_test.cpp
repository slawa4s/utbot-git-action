/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "dependent_functions_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, double_max_test_1)
{
    int actual = double_max(0, -1);
    EXPECT_EQ(0, actual);
}

TEST(regression, double_max_test_2)
{
    int actual = double_max(0, 0);
    EXPECT_EQ(0, actual);
}

#pragma endregion
}
