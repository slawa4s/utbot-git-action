/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "symbolic_stdin_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, check_password_test_1)
{
    int actual = check_password(0);
    EXPECT_EQ(0, actual);
}

TEST(regression, check_password_test_2)
{
    int actual = check_password(3);
    EXPECT_EQ(0, actual);
}

TEST(regression, check_password_test_3)
{
    int actual = check_password(0);
    EXPECT_EQ(0, actual);
}

TEST(regression, check_password_test_4)
{
    int actual = check_password(0);
    EXPECT_EQ(0, actual);
}

TEST(regression, check_password_test_5)
{
    int actual = check_password(1);
    EXPECT_EQ(0, actual);
}

TEST(regression, check_password_test_6)
{
    int actual = check_password(0);
    EXPECT_EQ(1, actual);
}

TEST(regression, check_password_test_7)
{
    int actual = check_password(2048);
    EXPECT_EQ(0, actual);
}

TEST(regression, check_password_test_8)
{
    int actual = check_password(0);
    EXPECT_EQ(0, actual);
}

TEST(regression, check_password_test_9)
{
    int actual = check_password(-1);
    EXPECT_EQ(0, actual);
}

#pragma endregion
}
