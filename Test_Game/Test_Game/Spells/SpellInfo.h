#pragma once
#include "Spell.h"

class SpellInfo : virtual public Spell
{
	const string SpellName;
	const string SpellDescription;

public:

	SpellInfo() = delete;
	SpellInfo(string Name, string Description);

	virtual ~SpellInfo();
};

