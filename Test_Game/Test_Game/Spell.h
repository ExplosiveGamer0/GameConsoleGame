#ifndef SPELL_H
#define SPELL_H

#include "includes.h"

class Spell
{
	//The Spell's name
	const string name;

	//The Spell's values
	const int damage;
	const int heal;
	const int dot;
	const int hot;

	//The Spell's role (to damage, to heal or both)
	const bool isDamaging;
	const bool isHealing;

	//The Spells nature
	//Thunder, Fire, Ice and Poison will each have a set%
	//chance to cause status ailments like stun and burn
	const bool isArcane;
	const bool isThunder;
	const bool isFire;
	const bool isIce;
	const bool isPoison;
	const bool isNature;

	//Can the spell leave a HealOverTime on the target
	const bool hasHealOverTime;

public:

	//You can't create a spell with the default constructor, use the next one.
	Spell() = delete;

	/*Spell main constructor
	*Parameters:	string n - Player's name
					int dmg - Spell's damage value
					int hv - Spell's heal value
					int d - Spell's DamageOverTime value
					int h - Spell's HealOverTime value
					bool id/ih - Is the spell to Damage/Heal? (can be both, think SpellVamp from LoL)
					bool at/tt/ft/it/pt/nt - Is the spell Arcane/Thunder/Fire/Ice/Poison/Nature type? (Some spells can have multiple types) (Types are useless for now; Add resistances later)
					bool hh - Can the spell leave a HealOverTime on the target?
	*/
	Spell(string n, int dmg, int hv, int d, int h,
		bool id, bool ih,
		bool at, bool tt, bool ft, bool it, bool pt, bool nt,
		bool hh);

	///////////////////////////////
	////VALUE GETTING FUNCTIONS////
	///////////////////////////////

	//Returns the Spell's Damage value
	inline int getDamage() const { return this->damage; }
	//Returns the Spell's Heal value
	inline int getHeal() const { return this->heal; }
	//Returns the Spell's DamageOverTime value
	inline int getDoT() { return this->dot; }


	//Stopped here to go to sleep after writting that wall of text down below
	inline bool isDamaging() const { return this->isDamaging; }
	inline bool isHealing() const { return this->isHealing; }

	inline bool isArcane() const { return this->isArcane; }
	inline bool isThunder() const { return this->isThunder; }
	inline bool isFire() const { return this->isFire; }
	inline bool isIce() const { return this->isIce; }
	inline bool isPoison() const { return this->isPoison; }

	virtual ~Spell();

};

#endif

/*NOTE FROM GOTHICDREAD (basically it's to myself, but it's a good read)

I just found out you can have multiple inheritances in c++,
which will make my life extremelly easier with this whole spells thing.

Basically, I was going around in my head on how to create a strong base class,
this Spell class, to accept whatever combo of damaging/healing/dot/hot/whatever
type of spells of multiple natures if needed.

This causes the problem of having a very strict constructor as you can see above,
see Spell(........), and can lead to human errors.

My Solution: create multiple child classes that inherit this base class, example:

class DamageSpell: virtual public Spell
{
	//class stuff goes in here
};

class HealingSpell: virtual public Spell
{
	//class stuff goes in here
};

(the virtual is needed)

And then after all that is done, let's say I wish to create a spell named Vampire Blast,
that damages the target while healing the caster. With the current constructor that I have,
I'd have to do VampireBlast vb = new Spell("Vampire Blast", 50, 25, 0, 0, true, true, etc...)
which is really not practical. Using the following:

class VampBlast: public DamageSpell, public HealingSpell
{

public:

	VampBlast(bool arcane, bool thunder, bool fire, bool ice, bool poison, bool nature):
	DamageSpell("Vampire Blast", 50, arcane, thunder, fire, ice, poison, nature),
	HealingSpell(25) {}

	//rest of class stuff
};

and then all I gotta do is:

vector<Spell> spells;

spells.add(new VampBlast(true, false, false, false, false, false));

Much less hassle. Since DamageSpell and HealingSpell are VIRTUAL children of Spell,
the Spell constructor will only be called by the first inherited class in VampBlast,
that means DamageSpell, that's why it's constructor will hold more parameters.

Learn from: https://www.geeksforgeeks.org/multiple-inheritance-in-c/
*/