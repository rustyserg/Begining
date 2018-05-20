#include "stdafx.h"
#include "GameObject.h"
#include "windows.h"
#include <iostream>

GameObject::GameObject()
{
}


GameObject::GameObject(int _x, int _y, char _symbol) : x(_x), y(_y), symbol(_symbol)
{
}

// Menaem koordinati v zavisimosti ot napravleniya
void GameObject::MakeMove(int offset, SnakeDirection dir)
{
	if (dir == SnakeDirection::RIGHT)
	{
		x = x + offset;
	}
	else if (dir == SnakeDirection::LEFT)
	{
		x = x - offset;
	}
	else if (dir == SnakeDirection::UP)
	{
		y = y - offset;
	}
	else if (dir == SnakeDirection::DOWN)
	{
		y = y + offset;
	}
}

void GameObject::Draw()
{
	//установить курсор согласно координатам x y
	HANDLE hStdout;
	COORD destCoord;
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	destCoord.X = x;
	destCoord.Y = y;
	SetConsoleCursorPosition(hStdout, destCoord);
	// вывести на экран указанный символ
	std::cout << symbol;
}

void GameObject::ClearScreen()
{
	symbol = ' ';
	Draw();
}

// проверка совпадения координат двух точек
bool GameObject::IsHit(GameObject fruit)
{
	if (fruit.x == this->x && fruit.y == this->y)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

GameObject::~GameObject()
{
}
