#include "SpellType.h"

SpellType::SpellType(bool chaos, bool fire, bool ice, bool light, bool thunder) :
	Spell(), ChaosType(chaos), FireType(fire), IceType(ice), LightType(light), ThunderType(thunder) {}

SpellType::~SpellType() {}