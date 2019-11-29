#pragma once

class Player;
#include "Player.h"
class State
{
protected:
	Player* player;
public:
	State() { player = nullptr; };
	State(Player* _player);
	virtual ~State();

	Player* GetPlayer() { return player; };
	void SetPlayer(Player *_player) { player = _player; };

	virtual void onPlay() = 0;
	virtual void onStop() = 0;

};

