#pragma once
#include <string>
#include <vector>

class Game
{
    std::string name;
public:
    Game();
    std::string getName();
    void addFrames(const std::string & frames);
    void read(const std::string& playerAndGame);
    int convertSingleCharToPoints(char input);
    int summingOfPointsWithoutBonus(const std::vector<int>& vec);
    int summingOfBonusPoints(const std::vector<int>& vec);
    int summingOfBonusPointsOfSpare(const std::vector<int>& vec);
};
