/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "memory_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, out_of_bound_access_to_stack_test_1)
{
    int actual = out_of_bound_access_to_stack(0);
    EXPECT_EQ(0, actual);
}

TEST(regression, out_of_bound_access_to_globals_test_1)
{
    int g_buffer[5] = {0, 0, 0, 0, 0};
    memcpy((void *) g, g_buffer, sizeof(g_buffer));
    int actual = out_of_bound_access_to_globals(0);
    EXPECT_EQ(0, actual);
    int expected_g[5] = {0, 0, 0, 0, 0};
    for (int it_333_0 = 0; it_333_0 < 5; it_333_0 ++) {
        EXPECT_EQ(expected_g[it_333_0], g[it_333_0]);
    }
}

TEST(regression, passthrough_test_1)
{
    char p[] = "bcbcccccc";
    char actual = *passthrough(p);
    EXPECT_EQ('b', actual);
    char expected_p[] = {'b', 'c', 'b', 'c', 'c', 'c', 'c', 'c', 'c', '\0'};
    for (int it_334_0 = 0; it_334_0 < 10; it_334_0 ++) {
        EXPECT_EQ(expected_p[it_334_0], p[it_334_0]);
    }
}

TEST(regression, use_after_scope_test_1)
{
    int actual = use_after_scope();
    EXPECT_EQ(0, actual);
}

#pragma endregion
#pragma region error
TEST(error, out_of_bound_access_to_heap_test_1)
{
    out_of_bound_access_to_heap(0);
}

TEST(error, out_of_bound_access_to_stack_test_2)
{
    out_of_bound_access_to_stack(8);
}

TEST(error, out_of_bound_access_to_globals_test_2)
{
    int g_buffer[5] = {0, 0, 0, 0, 0};
    memcpy((void *) g, g_buffer, sizeof(g_buffer));
    out_of_bound_access_to_globals(8);
}

TEST(error, use_after_free_test_1)
{
    use_after_free();
}

TEST(error, leak_stack_test_1)
{
    EXPECT_TRUE(leak_stack() == NULL);
}

TEST(error, use_after_return_test_1)
{
    use_after_return();
}

TEST(error, double_free_test_1)
{
    double_free();
}

TEST(error, invalid_free_test_1)
{
    invalid_free();
}

#pragma endregion
}
