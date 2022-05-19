/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "void_functions_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, print_sign_test_1)
{
    print_sign(0);
}

TEST(regression, print_sign_test_2)
{
    print_sign(-1);
}

TEST(regression, print_sign_test_3)
{
    print_sign(2);
}


TEST(regression, print_signs_for_two_structs_test_1)
{
    print_signs_for_two_structs({0}, {0});
}

TEST(regression, print_signs_for_two_structs_test_2)
{
    print_signs_for_two_structs({1}, {1});
}

TEST(regression, print_signs_for_two_structs_test_3)
{
    print_signs_for_two_structs({7}, {-8});
}


TEST(regression, print_value_test_1)
{
    print_value(0);
}

TEST(regression, print_value_test_2)
{
    print_value(23);
}

TEST(regression, print_value_test_3)
{
    print_value(42);
}

TEST(regression, print_value_test_4)
{
    print_value(33554455);
}

TEST(regression, print_value_test_5)
{
    print_value(11);
}

TEST(regression, print_value_test_6)
{
    print_value(1);
}

#pragma endregion
}