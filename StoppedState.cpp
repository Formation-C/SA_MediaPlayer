#include "StoppedState.h"
#include "PlayingState.h"


using namespace std;

void StoppedState::onPlay()
{
	player->SetState(new PlayingState(player));
	cout << player->PlayPlayback() << endl;
	delete this;
}

void StoppedState::onStop()
{
	throw "already in stop state";
}
