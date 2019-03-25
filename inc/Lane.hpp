#pragma once
#include <vector>
#include "Game.hpp"

class Lane
{
    int numberOfGames_;
    std::vector<Game> games_;
    std::vector<int> CharacterLocations;
public:
    Lane();
    int getNumberOfGames();
};
