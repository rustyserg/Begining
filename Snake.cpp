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
	// ���������� ������ ������������� ������� �������� �������
	GameObject tail = objectVec.front();

	//�������� ������� �������� �� �������
	objectVec.erase(objectVec.begin());

	//����������� ��������� ���������� ������
	GameObject head = GetNextPoint();
	objectVec.push_back(head);

	//������� ������
	tail.ClearScreen();
	// ��������� ����� ������
	head.Draw();
}

// ��������� � ����� ����� ����� ������ � ��������� ������
GameObject Snake::GetNextPoint()
{
	// ���������� ������
	GameObject nextPoint = objectVec.back();

	// �������� ������ �� 1 �� ����������� dir
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
