#include "Game.hpp"
#include<stdexcept>

Game::Game() {}

void Game::addFrames(std::string const & frames) {}

void Game::read(const std::string & playerAndGame) throw(std::logic_error) {
    int placeOfColon = playerAndGame.find(':');
    if(placeOfColon == 0)
    {
        throw std::logic_error("Invalid name");
    }
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
        return input -'0';

    throw std::logic_error("Invalid frame");
}

