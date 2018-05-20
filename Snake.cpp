#include "stdafx.h"
#include "Snake.h"
#include <conio.h>


Snake::Snake()
{
}

Snake::Snake(GameObject tail, int lenght, SnakeDirection _dir)
{
	dir = _dir;
	for (int i = 0; i < lenght; i++)
	{
		GameObject point(tail);
		point.MakeMove(i, dir);
		objectVec.push_back(point);
	}
}

void Snake::Move()
{
	// координаты хвоста соответствуют первому элементу вектора
	GameObject tail = objectVec.front();

	//удаление первого элемента из вектора
	objectVec.erase(objectVec.begin());

	//определение следующей координаты головы
	GameObject head = GetNextPoint();
	objectVec.push_back(head);

	//очистка хвоста
	tail.ClearScreen();
	// отрисовка новой головы
	head.Draw();
}

// вычисляет в какой точке будет голова в следующий момент
GameObject Snake::GetNextPoint()
{
	// координаты головы
	GameObject nextPoint = objectVec.back();

	// смещение головы на 1 по направлению dir
	nextPoint.MakeMove(1, dir);
	return nextPoint;
}

void Snake::PressedButton()
{
		switch (_getch())
		{
		case 75:
			dir = SnakeDirection::LEFT;
			break;
		case 77:
			dir = SnakeDirection::RIGHT;
			break;
		case 72:
			dir = SnakeDirection::UP;
			break;
		case 80:
			dir = SnakeDirection::DOWN;
			break;
		}
}

bool Snake::Eating(GameObject fruit)
{
	GameObject head = GetNextPoint();
	if(head.IsHit(fruit)) 
	{
		fruit.symbol = head.symbol;
		objectVec.push_back(fruit);
		return true;
	}
	else 
	{
		return false;
	}	
}

bool Snake::IsHitYourself()
{
	auto head  = objectVec.back();
	for (int i = 0; i < objectVec.size() - 1; i++) 
	{
		if (head.IsHit(objectVec[i])) 
		{
			return true;
		}
	}
	return false;
}

//int Snake::GetScore()
//{
//	return score += 10 ;
//}
//

Snake::~Snake()
{
}
