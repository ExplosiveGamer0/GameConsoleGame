#pragma once

#include"includes.h"

class Item
{
	//Name
	const string name;
	const string description;

	//Sets up the buy and sell value
	const int buyValue;
	const int sellValue;

	//Sets up the damage
	const int damageMin;
	const int damageMax;

	//Getters and Setters
	inline const string getName() const { return this->name; }
	inline const string getDescription() const { return this->description; }
	inline const int getBuyValue() const { return this->buyValue; }
	inline const int getSellValue() const { return this->sellValue; }
	inline const int getDamageMin() const { return this->damageMin; }
	inline const int getDamageMax() const { return this->damageMax; }

	Item(string name, string description, int buyValue, int sellValue, int damageMin, int damageMax);

public:

	Item();

	virtual ~Item();

};

