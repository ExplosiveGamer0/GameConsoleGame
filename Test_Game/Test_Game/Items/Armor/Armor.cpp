#include "Armor.h"

Armor::Armor()
{

}

Armor::~Armor()
{

}

Armor::Armor(string name, int buyValue, int sellValue, int defence, int accuracy, int damageBuff, int luck, int healthBuff, int staminaBuff)
{
	name = "Molten Chestpiece";
	buyValue = 5;
	sellValue = 2;
	defence = 1;
	accuracy = 5;
	damageBuff = 3;
	luck = 4;
	healthBuff = 6;
	staminaBuff = 6;
}
