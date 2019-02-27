#include <gtest/gtest.h>
#include "Game.hpp"
#include <string>

struct GameTests: public ::testing::Test
{
    Game game;
};

TEST_F(GameTests, AddFrames)
{
    Game game;
    game.addFrames("Someone:32|4");
}


TEST_F(GameTests, convertFrameToPoints)
{
    ASSERT_EQ(game.convertSingleCharToPoints('X'), 10);
    ASSERT_EQ(game.convertSingleCharToPoints('-'), 0);
    ASSERT_EQ(game.convertSingleCharToPoints('4'), 4);
}

TEST_F(GameTests, ConvertingWrongFrameCausesException)
{
    ASSERT_ANY_THROW(game.convertSingleCharToPoints('a'));
}
