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

TEST_F(GameTests, TestNameExtraction)
{
    game.read("Michael:9-|9-|9-|9-|9-|9-|9-|9-|9-|9-||");
    ASSERT_EQ(game.getName(),"Michael");
    Game game2;
    ASSERT_THROW(game2.read(":9-|9-|9-|9-|9-|9-|9-|9-|9-|9-||"), std::logic_error);
}

TEST_F(GameTests, ConvertingSingleCharToPoints_ProperCases)
{
    ASSERT_EQ(game.convertSingleCharToPoints('X'), 10);
    ASSERT_EQ(game.convertSingleCharToPoints('-'), 0);
    ASSERT_EQ(game.convertSingleCharToPoints('4'), 4);
}

TEST_F(GameTests, ConvertingSingleCharToPoints_BadCases)
{
    ASSERT_ANY_THROW(game.convertSingleCharToPoints('a'));
}

