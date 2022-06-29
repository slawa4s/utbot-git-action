/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "alignment_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, passthrough_test_1)
{
    __attribute__ ((aligned(32768))) char x[] = "accabcccc";
    char actual = *passthrough(x);
    EXPECT_EQ('a', actual);
    char expected_x[] = {'a', 'c', 'c', 'a', 'b', 'c', 'c', 'c', 'c', '\0'};
    for (int it_285_0 = 0; it_285_0 < 10; it_285_0 ++) {
        EXPECT_EQ(expected_x[it_285_0], x[it_285_0]);
    }
}

#pragma endregion
}
