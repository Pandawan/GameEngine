#include "stdafx.h"
#include "Player.h"

Player::Player()
	: GameObject("Bob", "Assets/textures/bob.png")
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

void Player::start() {
	std::cout << "Created Player \"" << m_Name << "\"" << std::endl;
}

void Player::update(float elapsedTime)
{
	Vector2f pos = m_Position;
	pos.x += m_Movement.x * m_Speed * elapsedTime;
	pos.y += m_Movement.y * m_Speed * elapsedTime;

	// Now move the sprite to its new position
	setPosition(pos);

}

void Player::input() {

	int dirX = 0;
	int dirY = 0;

	// Horizontal Player Movement
	if (Keyboard::isKeyPressed(Keyboard::A))
	{
		dirX = -1;
	}
	else if (Keyboard::isKeyPressed(Keyboard::D))
	{
		dirX = 1;
	}

	// Vertical Player Movement
	if (Keyboard::isKeyPressed(Keyboard::W))
	{
		dirY = -1;
	}
	else if (Keyboard::isKeyPressed(Keyboard::S))
	{
		dirY = 1;
	}

	move(dirX, dirY);
}