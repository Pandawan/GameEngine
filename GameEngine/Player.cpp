#include "stdafx.h"
#include "Player.h"

Player::Player() 
	: GameObject("Bob", "textures/bob.png")
{
	// How fast does Bob move?
	m_Speed = 400;

	m_Movement = Vector2f(0, 0);
}

void Player::move(float movX, float movY)
{
	m_Movement.x = movX;
	m_Movement.y = movY;
}

// Move Bob based on the input this frame,
// the time elapsed, and the speed
void Player::update(float elapsedTime)
{
	Vector2f pos = m_Position;
	pos.x += m_Movement.x * m_Speed * elapsedTime;
	pos.y += m_Movement.y * m_Speed * elapsedTime;

	// Now move the sprite to its new position
	setPosition(pos);

}