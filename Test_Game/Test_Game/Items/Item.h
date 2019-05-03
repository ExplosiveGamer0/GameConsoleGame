#pragma once

#include"../includes.h"

class Item
{
	//Name
	string name;
	string description;

	//Sets up the buy and sell value
	int buyValue = 0;
	int sellValue = 0;

	
	//Sets up the damage
	int damageMin = 0;
	int damageMax = 0;

	//Armor
	int defence = 0;
	int luck = 0;
	int accuracy = 0;
	int healthBuff = 0;

	//Getters and Setters
	inline string getDescription() const { return this->description; }
	inline int getBuyValue() const { return this->buyValue; }
	inline int getSellValue() const { return this->sellValue; }
	inline int getDefence() const { return this->defence; }
	inline int getLuck() const { return this->luck; }
	inline int getAccuracy() const { return this->accuracy; }
	inline int getHealthBuff() const { return this->healthBuff; }
	inline int getDamageMin() const { return this->damageMin; }
	inline int getDamageMax() const { return this->damageMax; }

public:

	Item();

	inline void setName(string n) { name = n; }

	inline string getName() const { return this->name; }

	virtual ~Item();

};

