/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "tree_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression

TEST(regression, deep_test_1)
{
    struct Tree root = {NULL, NULL};
    int actual = deep(&root);
    EXPECT_EQ(-1, actual);
    struct Tree expected_root = {NULL, NULL};
}

TEST(regression, deep_test_2)
{
    struct Tree root = {NULL, NULL};
    struct Tree utbotInnerVar1 = {NULL, NULL};
    struct Tree utbotInnerVar2 = {NULL, NULL};
    root.left = &utbotInnerVar1;
    root.right = &utbotInnerVar2;
    utbotInnerVar1.right = &utbotInnerVar2;
    int actual = deep(&root);
    EXPECT_EQ(-1, actual);
    struct Tree expected_root = {NULL, NULL};
}

TEST(regression, deep_test_3)
{
    struct Tree root = {NULL, NULL};
    struct Tree utbotInnerVar1 = {NULL, NULL};
    root.left = &utbotInnerVar1;
    root.right = &utbotInnerVar1;
    utbotInnerVar1.left = &utbotInnerVar1;
    utbotInnerVar1.right = &utbotInnerVar1;
    int actual = deep(&root);
    EXPECT_EQ(1, actual);
    struct Tree expected_root = {NULL, NULL};
}

TEST(regression, deep_test_4)
{
    struct Tree root = {NULL, (struct Tree *) 255};
    struct Tree utbotInnerVar1 = {NULL, NULL};
    root.left = &utbotInnerVar1;
    int actual = deep(&root);
    EXPECT_EQ(-1, actual);
    struct Tree expected_root = {NULL, NULL};
}

TEST(regression, deep_test_5)
{
    struct Tree root = {(struct Tree *) 255, NULL};
    int actual = deep(&root);
    EXPECT_EQ(-1, actual);
    struct Tree expected_root = {NULL, NULL};
}

TEST(regression, deep_test_6)
{
    struct Tree root = {NULL, NULL};
    struct Tree utbotInnerVar1 = {(struct Tree *) 9259542123273814144, NULL};
    struct Tree utbotInnerVar2 = {NULL, NULL};
    root.left = &utbotInnerVar1;
    root.right = &utbotInnerVar2;
    utbotInnerVar1.right = &utbotInnerVar2;
    utbotInnerVar2.left = &utbotInnerVar1;
    int actual = deep(&root);
    EXPECT_EQ(1, actual);
    struct Tree expected_root = {NULL, NULL};
}

#pragma endregion
#pragma region error
TEST(error, deep_test_7)
{
    struct Tree root = {NULL, (struct Tree *) 6998846708608139264};
    struct Tree utbotInnerVar1 = {(struct Tree *) 7016996765293437281, (struct Tree *) 6998846708608139264};
    root.left = &utbotInnerVar1;
    deep(&root);
    struct Tree expected_root = {NULL, NULL};
}

TEST(error, deep_test_8)
{
    struct Tree root = {(struct Tree *) 18446744073709551608, (struct Tree *) 255};
    deep(&root);
    struct Tree expected_root = {NULL, NULL};
}

TEST(error, deep_test_9)
{
    struct Tree root = {NULL, (struct Tree *) 255};
    struct Tree utbotInnerVar1 = {NULL, (struct Tree *) 255};
    root.left = &utbotInnerVar1;
    deep(&root);
    struct Tree expected_root = {NULL, NULL};
}

TEST(error, deep_test_10)
{
    struct Tree root = {(struct Tree *) 255, (struct Tree *) 255};
    deep(&root);
    struct Tree expected_root = {NULL, NULL};
}

#pragma endregion
}
