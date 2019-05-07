#pragma once

#include"../Item.h"

class Armor : public Item
{
	//Names
	const string name;

	//Stats
	const int defence;
	const int accuracy;
	const int damageBuff;
	const int durabilityValue;
	const int luck;
	const int healthBuff;
	const int staminaBuff;
	
	/////////////////////////
	// GETTERS AND SETTERS //
	/////////////////////////
	inline const string getName() const { return this->name; }
	inline const int getDefence() const { return this->defence; }
	inline const int getAccuracy() const { return this->accuracy; }
	inline const int getDamageBuff() const { return this->damageBuff; }
	inline const int getDurabilityValue() const { return this->durabilityValue; }
	inline const int getLuck() const { return this->luck; }
	inline const int getHealthBuff() const { return this->healthBuff; }
	inline const int getStaminaBuff() const { return this->staminaBuff; }

public:

	Armor(string name, int defence, int accuracy, int damageBuff, int durabilityValue, int luck, int healthBuff, int staminaBuff);

	virtual ~Armor();
};