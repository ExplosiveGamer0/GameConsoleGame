#include "SpellRole.h"

SpellRole::SpellRole(int SpellDamage, int SpellHeal, int SpellDoT, int SpellHoT, bool id, bool ih, bool hd, bool hh):
	Spell(),
	damage(SpellDamage), heal(SpellHeal), dot(SpellDoT), hot(SpellHoT),
	isDamaging(id), isHealing(ih), hasDoT(hd), hasHoT(hh) {}


SpellRole::~SpellRole() {}