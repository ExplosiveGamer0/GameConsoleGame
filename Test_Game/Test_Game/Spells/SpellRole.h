#pragma once

#include "Spell.h"

class SpellRole : virtual public Spell
{



public:

	SpellRole() = delete;

	virtual ~SpellRole();
};