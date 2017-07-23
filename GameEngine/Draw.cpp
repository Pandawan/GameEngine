#include "stdafx.h"
#include "Engine.h"

void Engine::draw()
{
	// Rub out the last frame
	m_Window.clear(Color::Black);

	/***** GAME VIEW *****/

	m_GameView->setCenter(m_Player->getCenterPosition());
	m_Window.setView(*m_GameView);

	// Draw the background
	m_Window.draw(m_BackgroundSprite);

	// Draw GameObjects
	for each (GameObject* obj in m_GameObjects)
	{
		m_Window.draw(obj->getSprite());
	}

	// Draw player
	m_Window.draw(m_Player->getSprite());


	/***** UI VIEW *****/

	m_Window.setView(*m_UIView);

	// Draw FPS
	m_Window.draw(m_FPS->getText());

	// Show everything we have just drawn
	m_Window.display();
}