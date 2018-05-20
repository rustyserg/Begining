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

// проверка пересечения точки змеи с какой либо точкой линии
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

// проверка пересечения точек линии поля с каждой точкой змеи 
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

