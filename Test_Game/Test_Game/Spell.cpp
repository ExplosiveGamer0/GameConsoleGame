#include "Spell.h"

Spell::Spell(string n, int dmg, int hv, int d, int h, bool id, bool ih, bool at, bool tt, bool ft, bool it, bool pt, bool nt, bool hh):
	name(n), damage(dmg), heal(hv), dot(d), hot(h), isDamaging(id), isHealing(ih), isArcane(at), isThunder(tt), isFire(ft), isIce(it), isPoison(pt), isNature(nt), hasHealOverTime(hh) {}


Spell::~Spell()
{
}