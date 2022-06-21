/*
 * This file is automatically generated by UnitTestBot. For further information see https://github.com/UnitTestBot/UTBotCpp
 * Copyright (c) Huawei Technologies Co., Ltd. 2012-2021. All rights reserved.
 */

#include "structs_with_pointers_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;
// Some tests for function 'list_sum' were skipped, as execution of function is out of timeout.

// Some tests for function 'list_sum_sign' were skipped, as execution of function is out of timeout.



#pragma region regression

TEST(regression, handle_struct_with_char_ptr_test_1)
{
    int actual = handle_struct_with_char_ptr({2, NULL});
    EXPECT_EQ(1, actual);
}

TEST(regression, handle_struct_with_char_ptr_test_2)
{
    int actual = handle_struct_with_char_ptr({0, NULL});
    EXPECT_EQ(2, actual);
}

TEST(regression, handle_struct_with_char_ptr_test_3)
{
    int actual = handle_struct_with_char_ptr({0, (char *) 65280});
    EXPECT_EQ(0, actual);
}

TEST(regression, handle_struct_with_char_ptr_test_4)
{
    int actual = handle_struct_with_char_ptr({-10, (char *) 18446744073709551615});
    EXPECT_EQ(2, actual);
}


TEST(regression, list_sum_test_1)
{
    struct List head = {NULL, 0};
    int actual = list_sum(&head);
    EXPECT_EQ(0, actual);
    struct List expected_head = {NULL, 0};
    EXPECT_EQ(expected_head.val, head.val);
}


TEST(regression, list_sum_sign_test_1)
{
    struct List head = {NULL, -10};
    int actual = list_sum_sign(&head);
    EXPECT_EQ(-1, actual);
    struct List expected_head = {(struct List *) 18446744073709551615, -10};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(regression, list_sum_sign_test_2)
{
    struct List head = {NULL, 1};
    int actual = list_sum_sign(&head);
    EXPECT_EQ(1, actual);
    struct List expected_head = {NULL, 1};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(regression, list_sum_sign_test_3)
{
    struct List head = {NULL, 0};
    int actual = list_sum_sign(&head);
    EXPECT_EQ(0, actual);
    struct List expected_head = {NULL, 0};
    EXPECT_EQ(expected_head.val, head.val);
}


TEST(regression, unsafe_next_value_test_1)
{
    struct List node = {NULL, 0};
    struct List utbotInnerVar1 = {NULL, 0};
    node.next = &utbotInnerVar1;
    int actual = unsafe_next_value(&node);
    EXPECT_EQ(0, actual);
    struct List expected_node = {NULL, 0};
    EXPECT_EQ(expected_node.val, node.val);
}


TEST(regression, sum_of_all_fields_or_mult_test_1)
{
    long long actual = sum_of_all_fields_or_mult({8LL, 0, {6, NULL}}, 0);
    EXPECT_EQ(8LL, actual);
}

TEST(regression, sum_of_all_fields_or_mult_test_2)
{
    long long actual = sum_of_all_fields_or_mult({3LL, 5, {-10, (char *) 361700864190383365}}, -322);
    EXPECT_EQ(-2LL, actual);
}

TEST(regression, sum_of_all_fields_or_mult_test_3)
{
    long long actual = sum_of_all_fields_or_mult({1LL, 2, {8, NULL}}, 0);
    EXPECT_EQ(11LL, actual);
}

TEST(regression, sum_of_all_fields_or_mult_test_4)
{
    long long actual = sum_of_all_fields_or_mult({8LL, 0, {6, NULL}}, -322);
    EXPECT_EQ(8LL, actual);
}

TEST(regression, sum_of_all_fields_or_mult_test_5)
{
    long long actual = sum_of_all_fields_or_mult({0LL, 0, {0, NULL}}, 0);
    EXPECT_EQ(1132LL, actual);
}


TEST(regression, some_calc_test_1)
{
    struct StructWithPointerInField actual = some_calc(-1, 9);
    struct StructWithPointerInField expected = {33333LL, 33, {3, NULL}};
    EXPECT_EQ(actual.ll, expected.ll);
    EXPECT_EQ(actual.sh, expected.sh);
    EXPECT_EQ(actual.a.a, expected.a.a);
}

TEST(regression, some_calc_test_2)
{
    struct StructWithPointerInField actual = some_calc(0, 2);
    struct StructWithPointerInField expected = {0LL, 0, {0, NULL}};
    EXPECT_EQ(actual.ll, expected.ll);
    EXPECT_EQ(actual.sh, expected.sh);
    EXPECT_EQ(actual.a.a, expected.a.a);
}

TEST(regression, some_calc_test_3)
{
    struct StructWithPointerInField actual = some_calc(1, -1);
    struct StructWithPointerInField expected = {33333LL, 33, {3, NULL}};
    EXPECT_EQ(actual.ll, expected.ll);
    EXPECT_EQ(actual.sh, expected.sh);
    EXPECT_EQ(actual.a.a, expected.a.a);
}

TEST(regression, some_calc_test_4)
{
    struct StructWithPointerInField actual = some_calc(1, 1);
    struct StructWithPointerInField expected = {22222LL, 22, {2, NULL}};
    EXPECT_EQ(actual.ll, expected.ll);
    EXPECT_EQ(actual.sh, expected.sh);
    EXPECT_EQ(actual.a.a, expected.a.a);
}

TEST(regression, some_calc_test_5)
{
    struct StructWithPointerInField actual = some_calc(0, 0);
    struct StructWithPointerInField expected = {11111LL, 11, {1, NULL}};
    EXPECT_EQ(actual.ll, expected.ll);
    EXPECT_EQ(actual.sh, expected.sh);
    EXPECT_EQ(actual.a.a, expected.a.a);
}

TEST(regression, some_calc_test_6)
{
    struct StructWithPointerInField actual = some_calc(-9, -2);
    struct StructWithPointerInField expected = {0LL, 0, {0, NULL}};
    EXPECT_EQ(actual.ll, expected.ll);
    EXPECT_EQ(actual.sh, expected.sh);
    EXPECT_EQ(actual.a.a, expected.a.a);
}

#pragma endregion
#pragma region error
TEST(error, list_sum_test_2)
{
    struct List head = {(struct List *) 255, 0};
    list_sum(&head);
    struct List expected_head = {NULL, 0};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(error, list_sum_test_3)
{
    struct List head = {(struct List *) 18446744073709551608, 0};
    list_sum(&head);
    struct List expected_head = {NULL, 0};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(error, list_sum_test_4)
{
    struct List head = {NULL, 0};
    struct List utbotInnerVar1 = {(struct List *) 562949953421320, 33686018};
    head.next = &utbotInnerVar1;
    list_sum(&head);
    struct List expected_head = {NULL, 0};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(error, list_sum_sign_test_4)
{
    struct List head = {(struct List *) 18446744073709551608, 0};
    list_sum_sign(&head);
    struct List expected_head = {NULL, 0};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(error, list_sum_sign_test_5)
{
    struct List head = {NULL, 0};
    struct List utbotInnerVar1 = {(struct List *) 197355822301319184, 33686018};
    head.next = &utbotInnerVar1;
    list_sum_sign(&head);
    struct List expected_head = {NULL, 0};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(error, list_sum_sign_test_6)
{
    struct List head = {(struct List *) 255, 0};
    list_sum_sign(&head);
    struct List expected_head = {NULL, 0};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(error, list_sum_sign_test_7)
{
    struct List head = {NULL, 0};
    struct List utbotInnerVar1 = {(struct List *) 247, 0};
    head.next = &utbotInnerVar1;
    list_sum_sign(&head);
    struct List expected_head = {NULL, 0};
    EXPECT_EQ(expected_head.val, head.val);
}

TEST(error, unsafe_next_value_test_2)
{
    struct List node = {(struct List *) 18446744073709551608, 0};
    unsafe_next_value(&node);
    struct List expected_node = {NULL, 0};
    EXPECT_EQ(expected_node.val, node.val);
}

TEST(error, unsafe_next_value_test_3)
{
    struct List node = {NULL, 0};
    unsafe_next_value(&node);
    struct List expected_node = {NULL, 0};
    EXPECT_EQ(expected_node.val, node.val);
}

#pragma endregion
}
