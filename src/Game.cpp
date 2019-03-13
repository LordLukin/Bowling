#include "Game.hpp"
#include <stdexcept>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <iterator>

Game::Game() {}

void Game::addFrames(const std::string& frames){}

void Game::read(const std::string & playerAndGame) {
    int placeOfColon = playerAndGame.find(':');
    name.append(playerAndGame.begin(), playerAndGame.begin() + placeOfColon);
}

std::string Game::getName() {
    return name;
}

int Game::convertSingleCharToPoints(char input)
{
    if (input == '-')
        return 0;
    if (input == 'X')
        return 10;
    if (input >= '1' and input <= '9')
        return input - '0';

    throw std::logic_error("Invalid frame");
}

int Game::summingOfPointsWithoutBonus(const std::vector<int>& vec)
{
    if (vec.size() != 0)
    {
       return std::accumulate(vec.begin(), vec.end(), 0);
    }
    throw std::logic_error("some data are required");
}

int Game::summingOfBonusPoints(const std::vector<int>& vec)
{
    std::vector<int> vec2;
    int j = 0;
    for (unsigned int i = 0; i < vec.size() - 2; i ++)
    {
        if ((vec[i] == 10))
        {
            j = vec[i + 1] + vec[i + 2];
            vec2.push_back(j);
        }
    }
    if ((vec[vec.size() - 2] == 10) && (vec[vec.size() - 1] == 10))
       vec2.push_back(40);

    if ((vec[vec.size() - 2] != 10) && (vec[vec.size() - 1] == 10))
       vec2.push_back(20);

    return std::accumulate(vec2.begin(), vec2.end(), 0);
}

int Game::summingOfBonusPointsOfSpare(const std::vector<int>& vec)
{
    std::vector<int> vec2;
    int suma = 0;
    for (unsigned int i = 0; i < vec.size() - 1; i ++)
    {
        if (vec[i] != 10)
        {
            if ((vec[i] + vec[i + 1] == 10))
            {
               suma = vec[i + 2];
               vec2.push_back(suma);
            }
            i += 2;
        }
    }
    if (vec[vec.size() - 1] + vec[vec.size() - 2] == 10)
       vec2.push_back(vec[vec.size() - 2]);
    else
       vec2.push_back(0);

    return std::accumulate(vec2.begin(), vec2.end(), 0);
}

