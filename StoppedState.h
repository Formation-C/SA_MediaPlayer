#pragma once
#include "State.h"
class StoppedState :
	public State
{
public:
	using State::State;// prend le constructeur de state

	
	~StoppedState() { cout << "destroying Sopped state" << endl; };

	void onPlay();
	void onStop();

protected:
private:

};

