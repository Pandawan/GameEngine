#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

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

	// Move Player in a specific direction
	void move(float movX, float movY);

	// We will call this function once every frame
	void update(float elapsedTime);

};