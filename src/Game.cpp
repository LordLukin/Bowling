#include "Game.hpp"
#include<stdexcept>
#include<vector>
#include<algorithm>
#include<numeric>
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

void Game::vectorOfDigits(std::string const & digits) {}
int Game::summingOfPointsWithoutBonus(int input)
{
    std::vector<int> v {};
    if (v.size() != 0 ){
        int sum = std::accumulate(v.begin(), v.end(), 0);
               return sum;
    }
        throw std::logic_error("some data are required");
}

