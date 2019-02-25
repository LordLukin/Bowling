#pragma once
#include <string>

class Game
{
    // TODO: Add game status: No game, In progress, Finished
public:
    Game();
    void addFrames(const std::string & frames);
    int convertFrameToPoints(std::string input);
};
