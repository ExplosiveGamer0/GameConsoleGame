#pragma once

#include"../includes.h"

struct Item
{
	//Sets up the buy and sell value
	int buyValue = 0;
	int sellValue = 0;

	//Getters
	/**
	inline string getName() const { return this->name; }
	inline string getDescription() const { return this->description; }
	inline int getBuyValue() const { return this->buyValue; }
	inline int getSellValue() const { return this->sellValue; }
	inline int getDefence() const { return this->defence; }
	inline int getLuck() const { return this->luck; }
	inline int getAccuracy() const { return this->accuracy; }
	inline int getHealthBuff() const { return this->healthBuff; }
	inline int getDamageMin() const { return this->damageMin; }
	inline int getDamageMax() const { return this->damageMax; }
	**/

	Item();

	//Setter
	/**
	inline void setName(string n) { name = n; }
	inline void setBuyValue(int buyVal) { buyValue = buyVal; }
	**/

	virtual ~Item();

};

