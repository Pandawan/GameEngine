#include "stdafx.h"
#include "FPS.h"


FPS::FPS(sf::View* uiView) {
	if (!m_Font.loadFromFile("Assets/fonts/arial.ttf"))
	{
		std::cout << "Error: Failed to load arial.ttf in FPS" << std::endl;
		return;
	}

	m_Text.setFont(m_Font);
	m_Text.setString("");
	m_Text.setCharacterSize(16);
	m_Text.setFillColor(sf::Color::Green);
	m_Text.setPosition(uiView->getCenter().x - (uiView->getSize().x / 2), uiView->getCenter().y - (uiView->getSize().y / 2));
}

void FPS::displayFPS(float num) {
	int realNum = (m_Num + int(num)) / 2;
	m_Text.setString(std::to_string(realNum));
	m_Num = realNum;
}

sf::Text FPS::getText() {
	return m_Text;
}