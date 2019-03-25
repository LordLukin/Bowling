#include "Game.hpp"
#include<stdexcept>

Game::Game() {}

void Game::addFrames(std::string const & frames) {}

int Game::convertSingleCharToPoints(char input)
{
    if (input == '-')
        return 0;
    if (input == 'X')
        return 10;
    if (input >= '1' and input <= '9')
        return input -'0';

    throw std::logic_error("Invalid frame");
}

void Game::read (const std::string &) {}
