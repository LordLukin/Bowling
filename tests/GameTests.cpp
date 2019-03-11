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

TEST_F(GameTests, Read)
{
    Game game;
    game.read("text");
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

TEST_F(GameTests, SummingOfPointsWithoutBonusWrongInput)
{
    ASSERT_ANY_THROW(game.summingOfPointsWithoutBonus({}));
}

TEST_F(GameTests, SummingOfPointsWithoutBonus)
{
    ASSERT_EQ(game.summingOfPointsWithoutBonus({4,2}), 6);
    ASSERT_EQ(game.summingOfPointsWithoutBonus({0,0}), 0);
    ASSERT_EQ(game.summingOfPointsWithoutBonus({0,1,5}), 6);
    ASSERT_EQ(game.summingOfPointsWithoutBonus({0,0,0,0,4}), 4);
}

TEST_F(GameTests, SummingOfBonusPoints)
{
    ASSERT_EQ(game.summingOfBonusPoints({4,2,3,6}), 0);
    ASSERT_EQ(game.summingOfBonusPoints({4,2,10,3,6}), 9);
    ASSERT_EQ(game.summingOfBonusPoints({10,1,1,10,2,2}), 6);
    ASSERT_EQ(game.summingOfBonusPoints({10,10,2,3}), 17);
    ASSERT_EQ(game.summingOfBonusPoints({2,3,10,10}), 40);
    ASSERT_EQ(game.summingOfBonusPoints({3,4,10}), 20);
    ASSERT_EQ(game.summingOfBonusPoints({10,2,3,10,10}), 45);
    ASSERT_EQ(game.summingOfBonusPoints({10,2,3,10,10,10}), 65);
    ASSERT_EQ(game.summingOfBonusPoints({10,10,10,10,10,10}), 120);
}

TEST_F(GameTests, SummingOfBonusPointsOfSpare)
{
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({3,7,10,2,8,10,3,7,2,8}), 24);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({4,6,10,2,3,2,8}), 12);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({2,8,3,7,3,3}), 6);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({2,8,3,7}), 6);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({2,8,3,7,1,9,1,9}), 6);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({2,8,3,1,1,8,10}), 3);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({10,10,10,10}), 0);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({1,1,2,2,10}), 0);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({1,9,2,2,10}), 2);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({10,9,1,1,1}), 1);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({10,10,9,1,1,1}), 1);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({10,10,9,1,10,1,1}), 10);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({10,10,9,1,10,1,1,10,10,10}), 10);
    ASSERT_EQ(game.summingOfBonusPointsOfSpare({0,0,0,0}), 0);
}
