
#include "Player.h"
#include <iostream>
#include <string>

class StoppedState;
#include "StoppedState.h"

Player::Player()
{
	Stop();
	SetCurTrack(0);
	tracklist = new std::vector<std::string>();
	for (int i = 0; i <= 12; i++)
	{
		
		tracklist->push_back("Track " + std::to_string(i));
	}
	SetState(new StoppedState(this));
}

Player::~Player()
{
	delete tracklist;
}

string Player::PlayPlayback()
{

	return "Play " + tracklist->at(current_track);
}


string Player::StopPlayback()
{
	current_track = 0;
	return "Stop playing " + tracklist->at(current_track);
}

string Player::PausePlayback()
{
	return "Pause on " + tracklist->at(current_track);
}

string Player::nextTrack()
{
	current_track++;
	current_track %= tracklist->size();
	return "Playing track " + tracklist->at(current_track) + ":";
}

string Player::previousTrack()
{
	current_track--;
	current_track %= tracklist->size();
	return "Playing track " + tracklist->at(current_track) + ":";
}

