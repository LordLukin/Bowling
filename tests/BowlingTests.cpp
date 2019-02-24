#include <gtest/gtest.h>
#include "Bowling.hpp"

struct BowlingTests : public ::testing::Test{   

    Bowling bowling;
};

TEST_F(BowlingTests, check_if_initial_NumberOfLanes_is_zero)
{
    //THEN
    ASSERT_EQ(0, bowling.getNumberOfLanes());
}



