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
	// ��������� ��������� ��������� ������
	x = rand() % 78;
	y = rand() % 24;
	return randomCoords;
}

Fruit::~Fruit()
{
}
