#include "includes.h"
#include "Interface.h"
#include "Items/Armor/Armor.h"

int main(int argc, char** argv)
{
	Interface *face = new Interface();

	face->run();

	delete face;

	return 0;
	/**
	Armor helmet1;
	helmet1.setName("Butter");
	cout << helmet1.getName() << endl;
	Armor chest1;
	chest1.setName("Cheese");
	cout << chest1.getName() << endl;
	system("pause");
	**/
	return 0;
}