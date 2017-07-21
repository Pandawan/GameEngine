#include "stdafx.h"
#include "Engine.h"

void Engine::input()
{
	// Handle the player quitting
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		m_Window.close();
	}

	int dirX = 0;
	int dirY = 0;

	// Horizontal Player Movement
	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		dirX = -1;
	}
	else if (Keyboard::isKeyPressed(Keyboard::D))
	{
		dirX = 1;
	}

	// Vertical Player Movement
	if (Keyboard::isKeyPressed(Keyboard::W))
	{
		dirY = -1;
	}
	else if (Keyboard::isKeyPressed(Keyboard::S))
	{
		dirY = 1;
	}

	m_Bob.move(dirX, dirY);

}