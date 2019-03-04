#pragma once
#include <string>
#include <iostream>

class Game
{
    std::string name;
public:
    Game();
    std::string getName();
    void addFrames(const std::string & frames);
    void read(const std::string& playerAndGame) throw(std::logic_error);
    int convertSingleCharToPoints(char input);
};
