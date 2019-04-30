#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"
#include "Spells/Spell.h"
#include "Spells/ActualSpells/spell_includes.h"

class Player: public Entity
{
	const string PlayerName;
	int gold;

	vector<Spell> spells;

public:

	Player() = delete;
	Player(string name);



	virtual ~Player();
};

#endif