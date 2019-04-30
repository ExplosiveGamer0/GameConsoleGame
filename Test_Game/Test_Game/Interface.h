#ifndef INTERFACE_H
#define INTERFACE_H

#include "includes.h"
#include "Game.h"

class Interface
{
	Game *game;	//Pointer to the main game logic class. Everything is contained inside this
	bool quit;	//Boolean control flag. Always false until the player whishes to quit the game.
	char opt;	//Player input variable for menus.

public:

	/*
	Default Interface class contructor.
	In here you allocate a new game object into memory.
	*/
	Interface();

	//Whenever you wish to start the game, call this function. It will do everything else.
	void run();

	~Interface();

private:

	//Draws the initial welcome screen
	void drawWelcomeScreen();

	//Draws the Main Menu
	void drawMainMenu();

	//Shows the Credits screen
	void ShowCredits();

	//Reads a character from stdin.
	//Return: (char) read from buffer.	
	char Read();

	//Clears the terminal window
	void clear();

	//Main Menu function.
	//Includes infite loop until the player quits the game.
	void MainMenu();
};

#endif