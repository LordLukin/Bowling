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
    auto result = game.convertFrameToPoints("X");
    ASSERT_EQ(game.convertFrameToPoints("X"), 10);
    ASSERT_EQ(game.convertFrameToPoints("-"), 0);
    ASSERT_EQ(game.convertFrameToPoints("4"), 4);
}

TEST_F(GameTests, ConvertingWrongFrameCausesException)
{
    ASSERT_ANY_THROW(game.convertFrameToPoints("a"));
    ASSERT_ANY_THROW(game.convertFrameToPoints("10"));
    ASSERT_ANY_THROW(game.convertFrameToPoints("-3"));
}

