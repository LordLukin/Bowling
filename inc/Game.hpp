#include <string>
#include<vector>

class Game
{
    // TODO: Add game status: No game, In progress, Finished
public:
    Game();
    void addFrames(const std::string & frames);
    int conversion_to_int(std::string input);
    int convertSingleCharToPoints(char input);

    void vectorOfDigits(const std::vector<int>& vec);
    int summingOfPointsWithoutBonus(const std::vector<int>& vec);
    
    void vectorOfDigits2(const std::vector<int>& vec);
    int summingOfBonusPoints(const std::vector<int> &vec);
    int summingOfBonusPointsOfSpare(const std::vector<int>& vec);
};
