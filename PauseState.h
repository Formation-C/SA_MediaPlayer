#pragma once
#include "State.h"
class PauseState :
	public State
{
	using State::State;// prend le constructeur de state


	~PauseState() { cout << "destroying Pause state" << endl; };

	void onPlay();
	void onStop();
};

