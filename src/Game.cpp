#include "Game.hpp
#include<stdexcept>

Game::Game() {}

void Game::addFrames(std::string const & frames) {}

int Game::convertSingleCharToPoints(char input)
{
    if (input == '-')
        return 0;
    if (input == 'X')
        return 10;
    if (input >= '1' and input <= '9')
        return input -'0';

    throw std::logic_error("Invalid frame");
}

void Game::read (const std::string & frames) {

	vector<int> characterLocations;
	for(int i=0; i < frames.size(); i++)
		if(frames[i] == '|')
			characterLocations.push_back(frames[i]);
	for(int i=0; i<characterLocations.length; i++){
		string frame;
		if i=0
			frame.append(frames.begin()+charLocations[i-1], frames.begin()+characterLocations[i+1])
		else
			frame.append(frames.begin(), frames.begin()+characterLocations[i])
		framesVector.pushback(frame);
}

