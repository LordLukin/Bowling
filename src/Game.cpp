#include "Game.hpp"
#include<stdexcept>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iostream>
Game::Game() {}

void Game::addFrames(std::string const & frames) {}
int Game::convertSingleCharToPoints(char input)
{
    if (input == '-')
        return 0;
    if (input == 'X')
        return 10;
    if (input >= '1' and input <='9')
        return input -'0';

    throw std::logic_error("Invalid frame");
}

void Game::vectorOfDigits(const std::vector<int>& vec) {}

int Game::summingOfPointsWithoutBonus(const std::vector<int>& vec)
{
    if(vec.size()!=0)
    {
        int sum = std::accumulate(vec.begin(), vec.end(), 0);
               return sum;
    }
        throw std::logic_error("some data are required");
}

