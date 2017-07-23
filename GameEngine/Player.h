#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include <iostream>

using namespace sf;

class Player : public GameObject
{
	// All the private variables can only be accessed internally
private:

	Vector2f m_Movement;

	// Player's speed in pixels per second
	float m_Speed;

	// Public functions
public:

	// Setup Player
	Player();

	// On first frame
	void start();

	// Move Player in a specific direction
	void move(float movX, float movY);

	// We will call this function once every frame
	void update(float elapsedTime);

	// Called once every frame during input phase
	void input();
};