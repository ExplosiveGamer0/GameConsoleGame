#include "Armor.h"

Armor::Armor(string name, int defence, int accuracy, int damageBuff, int durabilityValue, int luck, int healthBuff, int staminaBuff) : 
	name(name), defence(defence), accuracy(accuracy), damageBuff(damageBuff), durabilityValue(durabilityValue), luck(luck), healthBuff(healthBuff), staminaBuff(staminaBuff) {}

Armor::~Armor()
{

}