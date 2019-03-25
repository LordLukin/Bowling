#pragma once
#include <vector>
#include "Lane.hpp"

class Bowling
{
    int numberOfLanes_;
    std::vector<Lane> lanes_;
    std::vector<int> CharacterLocations;
public:
    Bowling();
    int getNumberOfLanes();
};

