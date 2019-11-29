
#include "Player.h"
#include <iostream>
#include <string>

Player::Player()
{
	Stop();
	tracklist = new std::vector<std::string>();
	for (int i = 0; i <= 12; i++)
	{
		
		tracklist->push_back("Track " + std::to_string(i));
	}
}

Player::~Player()
{
	delete tracklist;
}
