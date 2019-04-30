#pragma once
#include "../SpellRole.h"
class DamageSpell: virtual public SpellRole
{

public:
	DamageSpell();
	virtual ~DamageSpell();
};