#pragma once
#include <iostream>
#include <vector>


using namespace std;

class State;
#include "State.h"
class Player
{
private:
	bool playing;
	int current_track;
	vector<string>* tracklist;
	State* state;
public:
	Player();
	virtual ~Player();

	void SetCurTrack(int track) { current_track = track; };
	int GetCurTrack() { return current_track; };

	void Play() { playing = true; };
	void Stop() { playing = false; };

	/*void SetState(State _state) { state = _state};
	State GetCurState() {return state};*/

	void SetTracklist(vector<string>& _tracklist) { *tracklist = _tracklist; };
	vector<string>* GetTracklist() { return tracklist; };


	
};

