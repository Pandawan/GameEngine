#include "stdafx.h"
#include "GameObject.h"
#include <iostream>

GameObject::GameObject(std::string name, std::string texture)
{
	m_Name = name;

	// Set starting position
	m_Position.x = 0;
	m_Position.y = 0;

	// Associate a texture with the sprite
	m_Texture.loadFromFile(texture);

	m_Sprite.setTexture(m_Texture);
	m_Sprite.setPosition(m_Position);
}

// Make the private spite available to the draw() function
Sprite GameObject::getSprite()
{
	return m_Sprite;
}

Vector2f GameObject::getPosition() {
	return m_Position;
}

Vector2f GameObject::getCenterPosition() {
	sf::IntRect rect = m_Sprite.getTextureRect();

	return m_Position + Vector2f(rect.width / 2, rect.height / 2);
}

void GameObject::start()
{
	std::cout << "Created object " << m_Name << std::endl;
}

void GameObject::update(float elapsedTime)
{

}