#pragma once

#include "../includes.h"

class Spell
{

public:

	Spell();

	virtual int getSpellDamage() = delete;
	virtual int getSpellHealing() = delete;
	virtual string getSpellType() = delete;

	virtual ~Spell();
};