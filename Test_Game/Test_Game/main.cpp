#include "includes.h"
#include "Interface.h"

int main(int argc, char** argv)
{
	/**
	Interface *face = new Interface();

	face->run();

	delete face;

	return 0;
	**/ 

	Spell GenericDamageSpell("Fireball", 75, 64, 'f');

	GenericDamageSpell.SpellInfo();
	system("pause");

	return 0;

}