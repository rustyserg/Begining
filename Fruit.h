#pragma once
#include <utility>
#include "GameObject.h"

class Fruit : public GameObject
{
public:
	GameObject randomCoords;
public:
	Fruit();
	Fruit(char symbol);
	GameObject CreateFruit();
	~Fruit();
};

