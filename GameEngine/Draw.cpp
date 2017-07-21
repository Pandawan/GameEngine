#include "stdafx.h"
#include "Engine.h"

void Engine::draw()
{
	// Rub out the last frame
	m_Window.clear(Color::Black);

	sf::View currentView = m_Window.getView();
	currentView.setCenter(m_Bob.getCenterPosition());
	m_Window.setView(currentView);

	// Draw the background
	m_Window.draw(m_BackgroundSprite);

	// Draw GameObjects
	for each (GameObject* obj in m_GameObjects)
	{
		m_Window.draw(obj->getSprite());
	}

	// Draw player
	m_Window.draw(m_Bob.getSprite());

	// Show everything we have just drawn
	m_Window.display();
}