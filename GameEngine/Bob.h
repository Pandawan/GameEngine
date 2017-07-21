#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Bob
{
	// All the private variables can only be accessed internally
private:

	// Where is Bob
	Vector2f m_Position;

	// Of course we will need a sprite
	Sprite m_Sprite;

	// And a texture
	// Bob has been working out and he is now a bit more muscular than before
	// Furthermore, he fancies himself in lumberjack attire
	Texture m_Texture;

	Vector2f m_Movement;

	// Bob's speed in pixels per second
	float m_Speed;

	// Public functions
public:

	// We will set Bob up in the constructor
	Bob();

	// Send a copy of the sprite to main
	Sprite getSprite();

	// Get position in world (top left corner of sprite)
	Vector2f getPosition();

	// Get position in world where the center of the sprite is
	Vector2f getCenterPosition();

	// Move Bob in a specific direction
	void move(float movX, float movY);

	// We will call this function once every frame
	void update(float elapsedTime);

};