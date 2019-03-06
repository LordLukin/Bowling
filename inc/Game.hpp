#pragma once
#include <string>

class Game
{
    // TODO: Add game status: No game, In progress, Finished
public:
    Game();
    void addFrames(const std::string & frames);
    int convertSingleCharToPoints(char input);

    void vectorOfDigits(std::string const & digits);
    int summingOfPointsWithoutBonus(int input);


};
