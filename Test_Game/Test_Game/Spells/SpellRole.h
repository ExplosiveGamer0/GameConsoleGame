#pragma once
#include "Spell.h"
class SpellRole : virtual public Spell
{
	const int damage;
	const int heal;

	const int dot;
	const int hot;

	bool isDamaging;
	bool isHealing;

	bool hasDoT;
	bool hasHoT;

public:

	SpellRole() = delete;
	SpellRole(int SpellDamage, int SpellHeal, int SpellDoT, int SpellHoT, bool id, bool ih, bool hd, bool hh);


	virtual ~SpellRole();
};

