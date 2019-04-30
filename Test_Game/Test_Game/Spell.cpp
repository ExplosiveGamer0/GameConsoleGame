#include "Spell.h"

Spell::Spell(string n, int dmg, int hv, int d, int h, bool id, bool ih, bool at, bool tt, bool ft, bool it, bool pt, bool nt, bool hh)
{
	//name(n), damage(dmg), heal(hv), dot(d), hot(h), isDamaging(id), isHealing(ih), isArcane(at), isThunder(tt), isFire(ft), isIce(it), isPoison(pt), isNature(nt), hasHealOverTime(hh) {}
}
	


Spell::~Spell()
{
}

Spell::Spell(string name, int dmg, char nature)
{
	const string sn = name;

	const int damage = dmg;

	const bool isDamaging = true;

	switch (nature)
	{
	case 'f':
	{const bool isFire = true; }
		break;
	case 'i':
	{const bool isIce = true; }
		break;
	case 'p':
	{const bool isPoison = true; }
		break;
	case 'a':
	{const bool isArcane = true; }
		break;
	case 't':
	{const bool isThunder = true; }
		break;
	case 'n':
	{const bool isNature = true; }
	}
}

Spell::Spell(string name, int heal)
{
	const string sn = name;

	const int heals = heal;
}

Spell::Spell(string name, int dmg, int d, char nature)
{
	const string sn = name;

	const int damage = dmg;

	const int dot = d;

	switch (nature)
	{
	case 'f':
	{const bool isFire = true; }
		break;
	case 'i':
	{const bool isIce = true; }
		break;
	case 'p':
	{const bool isPoison = true; }
		break;
	case 'a':
	{const bool isArcane = true; }
		break;
	case 't':
	{const bool isThunder = true; }
		break;
	case 'n':
	{const bool isNature = true; }
	}
}

void Spell::SpellInfo()
{
	cout << "Spell name: " << name << endl;
	if (isDamaging)
	{
		cout << "Damage: " << damage << endl;
		if (isDot)
		{
			cout << "Damage per tick: " << dot << endl;
		}
		cout << "Nature: ";
		if (isArcane)
		{
			cout << "Arcane" << endl;
		}
		else if (isFire)
		{
			cout << "Fire" << endl;
		}
		else if (isPoison)
		{
			cout << "Poison" << endl;
		}
		else if (isIce)
		{
			cout << "Ice" << endl;
		}
		else if (isThunder)
		{
			cout << "Thunder" << endl;
		}
		else
		{
			cout << "Nature" << endl;
		}

	}
	else
	{
		cout << "Heal: " << heal << endl;
	}
	
}