#pragma once
#include "../SpellRole.h"
class HealingSpell: virtual public SpellRole
{
public:
	HealingSpell();
	virtual ~HealingSpell();
};