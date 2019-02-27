#pragma once
#include <string>

class Game
{
    std::string name;
public:
    Game();
    std::string getName();
    void addFrames(const std::string & frames);
    void read(const std::string& playerAndGame);
};
