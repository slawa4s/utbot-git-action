/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "complex_structs_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, struct_has_alphabet_test_1)
{
    int actual = struct_has_alphabet({
        .a = 0,
        .str = {'c', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'a', 'c'}});
    EXPECT_EQ(0, actual);
}

TEST(regression, struct_has_alphabet_test_2)
{
    int actual = struct_has_alphabet({
        .a = 1,
        .str = {'c', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'a', 'c'}});
    EXPECT_EQ(0, actual);
}

TEST(regression, struct_has_alphabet_test_3)
{
    int actual = struct_has_alphabet({
        .a = 0,
        .str = {'A', 'a', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'a', 'c'}});
    EXPECT_EQ(0, actual);
}

TEST(regression, struct_has_alphabet_test_4)
{
    int actual = struct_has_alphabet({
        .a = 0,
        .str = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'}});
    EXPECT_EQ(1, actual);
}

TEST(regression, arrays_in_inner_structs_test_1)
{
    char actual = arrays_in_inner_structs({
        .chs = {'h', 'c'},
        .b = -1,
        .in = {
            .ints = {0, 0, 0, 0, 0}}});
    EXPECT_EQ('1', actual);
}

TEST(regression, arrays_in_inner_structs_test_2)
{
    char actual = arrays_in_inner_structs({
        .chs = {'c', 'c'},
        .b = -1,
        .in = {
            .ints = {65, 0, 0, 0, 0}}});
    EXPECT_EQ('2', actual);
}

TEST(regression, arrays_in_inner_structs_test_3)
{
    char actual = arrays_in_inner_structs({
        .chs = {'c', 'c'},
        .b = 0,
        .in = {
            .ints = {0, 0, 0, 0, 0}}});
    EXPECT_EQ('0', actual);
}

TEST(regression, arrays_in_inner_structs_test_4)
{
    char actual = arrays_in_inner_structs({
        .chs = {'c', 'c'},
        .b = -1,
        .in = {
            .ints = {0, 0, 0, 0, 0}}});
    EXPECT_EQ('2', actual);
}

TEST(regression, arrays_in_inner_structs_test_5)
{
    char actual = arrays_in_inner_structs({
        .chs = {'c', 'c'},
        .b = -1,
        .in = {
            .ints = {65, 65, 0, 0, 0}}});
    EXPECT_EQ('2', actual);
}

TEST(regression, arrays_in_inner_structs_test_6)
{
    char actual = arrays_in_inner_structs({
        .chs = {'c', 'p'},
        .b = -1,
        .in = {
            .ints = {0, 0, 0, 0, 0}}});
    EXPECT_EQ('1', actual);
}

TEST(regression, arrays_in_inner_structs_test_7)
{
    char actual = arrays_in_inner_structs({
        .chs = {'c', 'c'},
        .b = -1,
        .in = {
            .ints = {65, 65, 65, 65, 65}}});
    EXPECT_EQ('3', actual);
}

TEST(regression, alphabet_test_1)
{
    struct One actual = alphabet(-1);
    struct One expected = {
        .a = -1,
        .str = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'}};
}

TEST(regression, alphabet_test_2)
{
    struct One actual = alphabet(0);
    struct One expected = {
        .a = 1,
        .str = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'}};
}

#pragma endregion
}