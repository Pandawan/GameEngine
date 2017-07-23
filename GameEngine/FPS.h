#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

class FPS
{
private:
	// Stored Font
	sf::Font m_Font;

	// Text
	sf::Text m_Text;

	float m_Num;
public:
	FPS(sf::View* uiView);

	// Show the FPS at the top screen
	void displayFPS(float num);

	sf::Text getText();

};