#pragma once
#include "State.h"
class PlayingState :
	public State
{

public:
	using State::State;// prend le constructeur de state


	~PlayingState() { cout << "destroying Playing state" << endl; };

	void onPlay();
	void onStop();
	void onNext();

protected:
private:

};

