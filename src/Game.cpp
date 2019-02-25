#include "Game.hpp"
#include<vector>
#include<iostream>
#include<algorithm>
#include<ostream>
#include<string>
#include<stdexcept>
Game::Game() {}

void Game::addFrames(std::string const & frames) {}
int Game::convertFrameToPoints(std::string input)
{
   // char firstCharacter = input[0];
  //  if (firstCharacter >= '1' and firstCharacter <= '9')
     //   return firstCharacter -'0';
     if (input == "-")
        return 0;
    else if (input == "X")
        return 10;
    else if (input == "1")
        return 1;
    else if (input == "2")
        return 2;
    else if (input == "3")
        return 3;
    else if (input == "4")
        return 4;
    else if (input == "5")
        return 5;
    else if (input == "6")
        return 6;
    else if (input == "7")
        return 7;
    else if (input == "8")
        return 8;
    else if (input == "9")
        return 9;

   else
      throw  std::logic_error("Invalid frame");
}
