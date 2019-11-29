#pragma once

class Player;
#include "Player.h"
class State
{
private:
	Player* player;
public:
	State() {};
	State(Player* _player);
	virtual ~State();

	Player* GetPlayer() { return player; };
	void SetPlayer(Player *_player) { player = _player; };

};

