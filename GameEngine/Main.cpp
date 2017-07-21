// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Engine.h"

int main()
{
	// Declare an instance of Engine
	Engine engine;

	engine.setName("Blaze Engine");

	// Start the engine
	engine.start();

	// Quit the game
	return 0;
}

