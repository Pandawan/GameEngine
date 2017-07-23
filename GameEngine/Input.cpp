#include "stdafx.h"
#include "Engine.h"

void Engine::input()
{
	// Handle the player quitting
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		m_Window.close();
	}

	for each (GameObject* obj in m_GameObjects)
	{
		obj->input();
	}

	
	// Vertical Player Movement
	if (Keyboard::isKeyPressed(Keyboard::K))
	{
		GameObject* obj = findObject("Random");

		if (obj != nullptr) {
			destroyObject(obj);
		}
	}

}