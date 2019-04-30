#pragma once
#include "../SpellRole.h"
class HealingSpell: virtual public SpellRole
{
public:
	HealingSpell() = delete;
	HealingSpell(int healing);
	virtual ~HealingSpell();
};