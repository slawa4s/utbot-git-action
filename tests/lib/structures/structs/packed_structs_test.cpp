/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "packed_structs_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, get_sign_packedStruct1_test_1)
{
    int actual = get_sign_packedStruct1({0, -10});
    EXPECT_EQ(-1, actual);
}

TEST(regression, get_sign_packedStruct1_test_2)
{
    int actual = get_sign_packedStruct1({0, 0});
    EXPECT_EQ(0, actual);
}

TEST(regression, get_sign_packedStruct1_test_3)
{
    int actual = get_sign_packedStruct1({0, 2});
    EXPECT_EQ(1, actual);
}


TEST(regression, get_val_by_packedStruct2_test_1)
{
    char actual = get_val_by_packedStruct2({'b', 0, {'c', 8}});
    EXPECT_EQ('4', actual);
}

TEST(regression, get_val_by_packedStruct2_test_2)
{
    char actual = get_val_by_packedStruct2({'c', 0, {'c', -1}});
    EXPECT_EQ('1', actual);
}

TEST(regression, get_val_by_packedStruct2_test_3)
{
    char actual = get_val_by_packedStruct2({'c', 0, {'c', 0}});
    EXPECT_EQ('2', actual);
}

TEST(regression, get_val_by_packedStruct2_test_4)
{
    char actual = get_val_by_packedStruct2({'b', 0, {'c', 0}});
    EXPECT_EQ('3', actual);
}


TEST(regression, get_val_by_otherPackedStruct_test_1)
{
    short actual = get_val_by_otherPackedStruct({'a', {'c', 0, {'a', 0}}, 'q', 0});
    EXPECT_EQ(-1, actual);
}

TEST(regression, get_val_by_otherPackedStruct_test_2)
{
    short actual = get_val_by_otherPackedStruct({'c', {'!', 0, {'a', 0}}, 'c', 0});
    EXPECT_EQ(0, actual);
}

TEST(regression, get_val_by_otherPackedStruct_test_3)
{
    short actual = get_val_by_otherPackedStruct({'c', {'a', 0, {'a', 0}}, 'c', 0});
    EXPECT_EQ(0, actual);
}

TEST(regression, get_val_by_otherPackedStruct_test_4)
{
    short actual = get_val_by_otherPackedStruct({'a', {'S', 0, {'a', 0}}, 'q', 0});
    EXPECT_EQ(5, actual);
}

#pragma endregion
}
