#pragma once
#include "Figure.h"
#include "HorisontLine.h"
#include "VerticalLine.h"
#include <iostream>

class SnakeBoard : public Figure
{
public:
	std::vector <Figure> board;
public:
	SnakeBoard();
	SnakeBoard(int mapWidth, int mapHeight);
	void Draw();
	bool IsHit(Figure figure);
	~SnakeBoard();
};

