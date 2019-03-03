#pragma once
#include <string>

class Game
{
    // TODO: Add game status: No game, In progress, Finished

    std:: string frames;
    
public:
    Game();
    void addFrames(const std::string & frames);

    int convertSingleCharToPoints(char input);

    void read(const std::string &);
    
    void readFrames (std::string frames);
};
