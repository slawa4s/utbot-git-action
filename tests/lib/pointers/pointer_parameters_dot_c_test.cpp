/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "pointer_parameters_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, c_strcmp_test_1)
{
    char a[] = "cbaaccccc";
    char b[] = "crccaccbc";
    int actual = c_strcmp(a, b);
    EXPECT_EQ(0, actual);
}

TEST(regression, c_strcmp_test_2)
{
    char a[] = "";
    char b[] = "";
    int actual = c_strcmp(a, b);
    EXPECT_EQ(1, actual);
}

TEST(regression, c_strcmp_test_3)
{
    char a[] = "c";
    char b[] = "c";
    int actual = c_strcmp(a, b);
    EXPECT_EQ(1, actual);
}

TEST(regression, c_strcmp_test_4)
{
    char a[] = "hcaaccccc";
    char b[] = "icccaccbc";
    int actual = c_strcmp(a, b);
    EXPECT_EQ(0, actual);
}

TEST(regression, c_strcmp_test_5)
{
    char a[] = "cccccccba";
    char b[] = "cccccccba";
    int actual = c_strcmp(a, b);
    EXPECT_EQ(1, actual);
}

TEST(regression, ishello_test_1)
{
    char a[] = "hcccbccca";
    int actual = ishello(a);
    EXPECT_EQ(0, actual);
}

TEST(regression, ishello_test_2)
{
    char a[] = "baccbccca";
    int actual = ishello(a);
    EXPECT_EQ(0, actual);
}

TEST(regression, ishello_test_3)
{
    char a[] = "helloccca";
    int actual = ishello(a);
    EXPECT_EQ(0, actual);
}

TEST(regression, ishello_test_4)
{
    char a[] = "hello";
    int actual = ishello(a);
    EXPECT_EQ(1, actual);
}

TEST(regression, isworld_test_1)
{
    unsigned char a = 99;
    int actual = isworld(&a);
    EXPECT_EQ(0, actual);
}

TEST(regression, longptr_cmp_test_1)
{
    long a = 0L;
    long b = 0L;
    int actual = longptr_cmp(&a, &b);
    EXPECT_EQ(1, actual);
    long expected_a = 0L;
    EXPECT_EQ(expected_a, a);
    long expected_b = 0L;
    EXPECT_EQ(expected_b, b);
}

TEST(regression, void_pointer_char_usage_test_1)
{
    __attribute__ ((aligned(128))) unsigned char x = 0;
    int actual = void_pointer_char_usage(&x);
    EXPECT_EQ(0, actual);
}

TEST(regression, accept_const_void_ptr_ptr_test_1)
{
    unsigned char _p[2][2] = {{0, 0}, {0, 0}};
    unsigned char ** p = (unsigned char **) calloc(3, sizeof(unsigned char *));
    for (int it_415_0 = 0; it_415_0 < 2; it_415_0 ++) {
        p[it_415_0] = _p[it_415_0];
    }
    p[2] = NULL;
    int actual = accept_const_void_ptr_ptr((const void **) p);
    EXPECT_EQ(0, actual);
}

#pragma endregion
#pragma region error
TEST(error, isworld_test_2)
{
    unsigned char a = 119;
    isworld(&a);
}

TEST(error, void_pointer_int_usage_test_1)
{
    __attribute__ ((aligned(128))) unsigned char x = 0;
    void_pointer_int_usage(&x);
}

TEST(error, void_pointer_char_usage_test_2)
{
    __attribute__ ((aligned(128))) unsigned char x = 104;
    void_pointer_char_usage(&x);
}

#pragma endregion
}
