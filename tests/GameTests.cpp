#include <gtest/gtest.h>
#include "Game.hpp"
#include<string>

struct GameTests: public ::testing::Test
{
    Game game;
};

TEST_F(GameTests, AddFrames)
{
    Game game;
    game.addFrames("Someone:32|4");
}

TEST_F(GameTests, conversion_to_int)
{
    Game game;
    auto result1 = game.conversion_to_int("X");
    ASSERT_EQ(result1, 10);
    auto result2 =game.conversion_to_int("-");
    ASSERT_EQ(result2, 0);
    auto result3 = game.conversion_to_int("4");
    ASSERT_EQ(result3, 4);
    auto result4 = game.conversion_to_int("a");
    ASSERT_EQ(result4, false);
    auto result5 = game.conversion_to_int("10");
    ASSERT_EQ(result5, false);
    auto result6 = game.conversion_to_int("-3");
    ASSERT_EQ(result6, false);
}
