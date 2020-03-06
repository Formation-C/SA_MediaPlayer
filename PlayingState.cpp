#include "PlayingState.h"
#include "StoppedState.h"
#include "PauseState.h"

void PlayingState::onPlay()
{
	player->SetState(new PauseState(player));
	cout << player->PausePlayback() << endl;
	delete this;
}

void PlayingState::onNext()
{
	cout << player->nextTrack() << endl;
}

void PlayingState::onStop()
{
	player->SetState(new StoppedState(player));
	cout << player->StopPlayback() << endl;
	delete this;
}

