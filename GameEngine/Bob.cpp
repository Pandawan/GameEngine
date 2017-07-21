#include "stdafx.h"
#include "bob.h"

Bob::Bob()
{
	// How fast does Bob move?
	m_Speed = 400;

	// Associate a texture with the sprite
	m_Texture.loadFromFile("textures/bob.png");
	m_Sprite.setTexture(m_Texture);

	// Set the Bob's starting position
	m_Position.x = 0;
	m_Position.y = 0;

	m_Movement = Vector2f(0, 0);
}

// Make the private spite available to the draw() function
Sprite Bob::getSprite()
{
	return m_Sprite;
}

Vector2f Bob::getPosition() {
	return m_Position;
}

Vector2f Bob::getCenterPosition() {
	sf::IntRect rect = m_Sprite.getTextureRect();

	return m_Position + Vector2f(rect.width / 2, rect.height / 2);
}

void Bob::move(float movX, float movY)
{
	m_Movement.x = movX;
	m_Movement.y = movY;
}

// Move Bob based on the input this frame,
// the time elapsed, and the speed
void Bob::update(float elapsedTime)
{
	m_Position.x += m_Movement.x * m_Speed * elapsedTime;
	m_Position.y += m_Movement.y * m_Speed * elapsedTime;

	// Now move the sprite to its new position
	m_Sprite.setPosition(m_Position);

}