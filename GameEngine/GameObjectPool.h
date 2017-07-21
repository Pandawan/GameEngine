#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

using namespace sf;

class GameObjectPool
{
private:
public:
	GameObject* getNext(void) const;
	void setNext(GameObject* next);
};