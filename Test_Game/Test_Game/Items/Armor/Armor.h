#pragma once

#include"../Item.h"

class Armor : public Item
{
	/**
	//Name and stuff
	const string name;
	const string description;

	//Buy and sell value
	const int buyValue;
	const int sellValue;

	//Defence and stats
	const int defence;
	const int accuracy;
	const int damageBuff;
	// This will be a percentage buff depending on the weapon or spell used
	// So if you use this on a chaos spell it could have a damage buff of 15% and then a sword could have a damage buff of 5%
	const int luck; // Allows the player to have a higher percentage to get drops
	const int healthBuff; // Buffs health
	const int staminaBuff; // Buffs stamina

						   /////////////////////////
						   // GETTERS AND SETTERS //
						   /////////////////////////
	inline const string getName() const { return this->name; }
	inline const int getBuyValue() const { return this->buyValue; }
	inline const int getSellValue() const { return this->sellValue; }
	inline const int getDefence() const { return this->defence; }
	inline const int getAccuracy() const { return this->accuracy; }
	inline const int getDamageBuff() const { return this->damageBuff; }
	inline const int getLuck() const { return this->luck; }
	inline const int getHealthBuff() const { return this->healthBuff; }
	inline const int getStaminaBuff() const { return this->staminaBuff; }
	**/

public:

	Armor();

	virtual ~Armor();
};