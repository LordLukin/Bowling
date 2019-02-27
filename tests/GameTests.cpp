#include <gtest/gtest.h>
#include "Game.hpp"

struct GameTests: public ::testing::Test
{
};

TEST_F(GameTests, AddFrames)
{
    Game game;
    game.addFrames("Someone:32|4");
}

TEST_F(GameTests, Read)
{
    Game game;
    game.read("Michael:9-|9-|9-|9-|9-|9-|9-|9-|9-|9-||");
    ASSERT_EQ(game.getName(),"Michael");
}
