#pragma once
#include <string>

class Game
{
    // TODO: Add game status: No game, In progress, Finished
public:
    Game();
    void addFrames(const std::string & frames);

    int convertSingleCharToPoints(char input);

    void read(const std::string & frames);

};
