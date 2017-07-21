#include "stdafx.h"
#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSeconds)
{
	m_Player->update(dtAsSeconds);

	for each (GameObject* obj in m_GameObjects)
	{
		obj->update(dtAsSeconds);
	}
}