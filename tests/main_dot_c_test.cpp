/*
 * This file is automatically generated by UnitTestBot. For further information seehttps://unittestbot.org
 */

#include "main_dot_c_test.h"

#include "gtest/gtest.h"
namespace UTBot {
static const float utbot_abs_error = 1e-6;


#pragma region regression
TEST(regression, main_test_1)
{
    char _argv[2][2] = {{'b', 'c'}, {'-', '{'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_300_0 = 0; it_300_0 < 2; it_300_0 ++) {
        argv[it_300_0] = _argv[it_300_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'-', '{'}};
    for (int it_301_0 = 0; it_301_0 < 2; it_301_0 ++) {
        for (int it_301_1 = 0; it_301_1 < 2; it_301_1 ++) {
            EXPECT_EQ(expected_argv[it_301_0][it_301_1], _argv[it_301_0][it_301_1]);
        }
    }
}

TEST(regression, main_test_2)
{
    char _argv[2][2] = {{'b', 'c'}, {'7', '<'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_302_0 = 0; it_302_0 < 2; it_302_0 ++) {
        argv[it_302_0] = _argv[it_302_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(7, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'7', '<'}};
    for (int it_303_0 = 0; it_303_0 < 2; it_303_0 ++) {
        for (int it_303_1 = 0; it_303_1 < 2; it_303_1 ++) {
            EXPECT_EQ(expected_argv[it_303_0][it_303_1], _argv[it_303_0][it_303_1]);
        }
    }
}

TEST(regression, main_test_3)
{
    char _argv[2][2] = {{'b', 'c'}, {'-', 'c'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_304_0 = 0; it_304_0 < 2; it_304_0 ++) {
        argv[it_304_0] = _argv[it_304_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'-', 'c'}};
    for (int it_305_0 = 0; it_305_0 < 2; it_305_0 ++) {
        for (int it_305_1 = 0; it_305_1 < 2; it_305_1 ++) {
            EXPECT_EQ(expected_argv[it_305_0][it_305_1], _argv[it_305_0][it_305_1]);
        }
    }
}

TEST(regression, main_test_4)
{
    char _argv[2][2] = {{'b', 'c'}, {'\f', '\0'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_306_0 = 0; it_306_0 < 2; it_306_0 ++) {
        argv[it_306_0] = _argv[it_306_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'\f', '\0'}};
    for (int it_307_0 = 0; it_307_0 < 2; it_307_0 ++) {
        for (int it_307_1 = 0; it_307_1 < 2; it_307_1 ++) {
            EXPECT_EQ(expected_argv[it_307_0][it_307_1], _argv[it_307_0][it_307_1]);
        }
    }
}

TEST(regression, main_test_5)
{
    char _argv[2][2] = {{'b', 'c'}, {'-', 'B'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_308_0 = 0; it_308_0 < 2; it_308_0 ++) {
        argv[it_308_0] = _argv[it_308_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'-', 'B'}};
    for (int it_309_0 = 0; it_309_0 < 2; it_309_0 ++) {
        for (int it_309_1 = 0; it_309_1 < 2; it_309_1 ++) {
            EXPECT_EQ(expected_argv[it_309_0][it_309_1], _argv[it_309_0][it_309_1]);
        }
    }
}

TEST(regression, main_test_6)
{
    char _argv[2][2] = {{'b', 'c'}, {'7', 'B'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_310_0 = 0; it_310_0 < 2; it_310_0 ++) {
        argv[it_310_0] = _argv[it_310_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(7, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'7', 'B'}};
    for (int it_311_0 = 0; it_311_0 < 2; it_311_0 ++) {
        for (int it_311_1 = 0; it_311_1 < 2; it_311_1 ++) {
            EXPECT_EQ(expected_argv[it_311_0][it_311_1], _argv[it_311_0][it_311_1]);
        }
    }
}

TEST(regression, main_test_7)
{
    char _argv[2][2] = {{'b', 'c'}, {'c', 'c'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_312_0 = 0; it_312_0 < 2; it_312_0 ++) {
        argv[it_312_0] = _argv[it_312_0];
    }
    argv[2] = NULL;
    int actual = main(0, argv);
    EXPECT_EQ(1, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'c', 'c'}};
    for (int it_313_0 = 0; it_313_0 < 2; it_313_0 ++) {
        for (int it_313_1 = 0; it_313_1 < 2; it_313_1 ++) {
            EXPECT_EQ(expected_argv[it_313_0][it_313_1], _argv[it_313_0][it_313_1]);
        }
    }
}

TEST(regression, main_test_8)
{
    char _argv[2][2] = {{'b', 'c'}, {'\f', 'B'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_314_0 = 0; it_314_0 < 2; it_314_0 ++) {
        argv[it_314_0] = _argv[it_314_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'\f', 'B'}};
    for (int it_315_0 = 0; it_315_0 < 2; it_315_0 ++) {
        for (int it_315_1 = 0; it_315_1 < 2; it_315_1 ++) {
            EXPECT_EQ(expected_argv[it_315_0][it_315_1], _argv[it_315_0][it_315_1]);
        }
    }
}

TEST(regression, main_test_9)
{
    char _argv[2][2] = {{'b', 'c'}, {'\f', 'f'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_316_0 = 0; it_316_0 < 2; it_316_0 ++) {
        argv[it_316_0] = _argv[it_316_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'\f', 'f'}};
    for (int it_317_0 = 0; it_317_0 < 2; it_317_0 ++) {
        for (int it_317_1 = 0; it_317_1 < 2; it_317_1 ++) {
            EXPECT_EQ(expected_argv[it_317_0][it_317_1], _argv[it_317_0][it_317_1]);
        }
    }
}

TEST(regression, main_test_10)
{
    char _argv[2][2] = {{'b', 'c'}, {'1', '<'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_318_0 = 0; it_318_0 < 2; it_318_0 ++) {
        argv[it_318_0] = _argv[it_318_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(3, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'1', '<'}};
    for (int it_319_0 = 0; it_319_0 < 2; it_319_0 ++) {
        for (int it_319_1 = 0; it_319_1 < 2; it_319_1 ++) {
            EXPECT_EQ(expected_argv[it_319_0][it_319_1], _argv[it_319_0][it_319_1]);
        }
    }
}

TEST(regression, main_test_11)
{
    char _argv[2][2] = {{'b', 'c'}, {'\f', ':'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_320_0 = 0; it_320_0 < 2; it_320_0 ++) {
        argv[it_320_0] = _argv[it_320_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(2, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'\f', ':'}};
    for (int it_321_0 = 0; it_321_0 < 2; it_321_0 ++) {
        for (int it_321_1 = 0; it_321_1 < 2; it_321_1 ++) {
            EXPECT_EQ(expected_argv[it_321_0][it_321_1], _argv[it_321_0][it_321_1]);
        }
    }
}

TEST(regression, main_test_12)
{
    char _argv[2][2] = {{'b', 'c'}, {'1', '\0'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_322_0 = 0; it_322_0 < 2; it_322_0 ++) {
        argv[it_322_0] = _argv[it_322_0];
    }
    argv[2] = NULL;
    int actual = main(2, argv);
    EXPECT_EQ(3, actual);
    char expected_argv[2][2] = {{'b', 'c'}, {'1', '\0'}};
    for (int it_323_0 = 0; it_323_0 < 2; it_323_0 ++) {
        for (int it_323_1 = 0; it_323_1 < 2; it_323_1 ++) {
            EXPECT_EQ(expected_argv[it_323_0][it_323_1], _argv[it_323_0][it_323_1]);
        }
    }
}

#pragma endregion
#pragma region error
TEST(error, main_test_13)
{
    char _argv[2][2] = {{'c', 'c'}, {'\n', '-'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_324_0 = 0; it_324_0 < 2; it_324_0 ++) {
        argv[it_324_0] = _argv[it_324_0];
    }
    argv[2] = NULL;
    main(2, argv);
}

TEST(error, main_test_14)
{
    char _argv[2][2] = {{'c', 'c'}, {'\n', '+'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_325_0 = 0; it_325_0 < 2; it_325_0 ++) {
        argv[it_325_0] = _argv[it_325_0];
    }
    argv[2] = NULL;
    main(2, argv);
}

TEST(error, main_test_15)
{
    char _argv[2][2] = {{'c', 'c'}, {'-', '0'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_326_0 = 0; it_326_0 < 2; it_326_0 ++) {
        argv[it_326_0] = _argv[it_326_0];
    }
    argv[2] = NULL;
    main(2, argv);
}

TEST(error, main_test_16)
{
    char _argv[2][2] = {{'c', 'c'}, {'\n', '\r'}};
    char ** argv = (char **) calloc(3, sizeof(char *));
    for (int it_327_0 = 0; it_327_0 < 2; it_327_0 ++) {
        argv[it_327_0] = _argv[it_327_0];
    }
    argv[2] = NULL;
    main(2, argv);
}

#pragma endregion
}
