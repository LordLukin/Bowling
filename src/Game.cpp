#include "Game.hpp"

Game::Game() {}

void Game::addFrames(std::string const & frames) {}

void Game::read(std::string const & playerAndGame) {
    int placeOfChar = playerAndGame.find(':');
    name.append(playerAndGame.begin(),playerAndGame.begin()+placeOfChar);
}

std::string Game::getName(){
    return name;
}
