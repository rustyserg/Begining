#include "stdafx.h"
#include "Fruit.h"


Fruit::Fruit()
{
}

Fruit::Fruit(char symbol)
{
	this->symbol = symbol;
}

GameObject Fruit::CreateFruit()
{
	// генерация рандомных координат фрукта
	x = rand() % 78;
	y = rand() % 24;
	return randomCoords;
}

Fruit::~Fruit()
{
}
