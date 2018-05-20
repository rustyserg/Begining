#include "stdafx.h"
#include "Figure.h"


Figure::Figure()
{
}

void Figure::Draw()
{
	for (auto x : objectVec)
	{
		x.Draw();
	}
}

// �������� ����������� ����� ���� � ����� ���� ������ �����
bool Figure::IsHit(Figure snake)
{
	for (auto x : objectVec) 
	{
		if (snake.IsHit(x))
		{
			return true;
		}
	}
	return false;
}

// �������� ����������� ����� ����� ���� � ������ ������ ���� 
bool Figure::IsHit(GameObject object)
{
	for (auto x : objectVec)
	{
		if (object.IsHit(x))
		{
			return true;
		}
	}
	return false;
}

Figure::~Figure()
{
}

