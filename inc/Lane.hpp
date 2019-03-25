#pragma once
#include <vector>
#include "Game.hpp"
#include <fstream>

class Lane
{
    int numberOfGames_;
    std::vector<Game> games_;
public:
    Lane();
    int getNumberOfGames();
    std::ifstream open(std::string pathToFile);
};
