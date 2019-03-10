#pragma once
#include <string>
#include <vector>

class Game
{
    // TODO: Add game status: No game, In progress, Finished
public:
    Game();
    int convertSingleCharToPoints(char input);
    int summingOfPointsWithoutBonus(const std::vector<int>& vec);
    int summingOfBonusPoints(const std::vector<int>& vec);
    int summingOfBonusPointsOfSpare(const std::vector<int>& vec);
};
