#pragma once
#include "Spell.h"

class SpellType: virtual public Spell
{
	const bool ChaosType;
	const bool FireType;
	const bool IceType;
	const bool LightType;
	const bool ThunderType;

public:

	SpellType() = delete;
	SpellType(bool chaos, bool fire, bool ice, bool light, bool thunder);

	virtual ~SpellType();
};

