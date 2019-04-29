#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Player : public Entity
{
	const string PlayerName;
	int gold;

public:

	Player() = delete;
	Player(string name);
	virtual ~Player();
};

#endif