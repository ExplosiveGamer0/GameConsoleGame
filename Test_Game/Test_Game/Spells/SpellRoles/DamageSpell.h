#pragma once
#include "../SpellRole.h"
class DamageSpell: virtual public SpellRole
{

public:
	DamageSpell() = delete;
	DamageSpell(int damage);

	virtual ~DamageSpell();
};