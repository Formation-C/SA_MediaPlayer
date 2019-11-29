#include "PauseState.h"
#include "StoppedState.h"
#include "PlayingState.h"

using namespace std;
void PauseState::onPlay()
{
	player->SetState(new PlayingState(player));
	cout << player->PlayPlayback() << endl;
	delete this;
}

void PauseState::onStop()
{
	player->SetState(new StoppedState(player));
	cout << player->StopPlayback() << endl;
	delete this;
}
