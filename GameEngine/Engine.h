#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Bob.h"
#include "GameObject.h"

using namespace sf;

class Engine
{
private:

	// A regular RenderWindow
	RenderWindow m_Window;

	// Declare a sprite and a Texture for the background
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;

	// An instance of Bob
	Bob m_Bob;

	std::vector<GameObject*> m_GameObjects;

	// Name of the Game Engine
	std::string m_Name;

	// Private functions for internal use only
	void input();
	void update(float dtAsSeconds);
	void draw();

public:
	// The Engine constructor
	Engine();

	// Set Name of Game Engine
	void setName(std::string);

	// start will call all the private functions
	void start();

	// Create all the GameObjects needed
	void createObjects();

};