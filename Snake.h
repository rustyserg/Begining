#pragma once
#include "Figure.h"

class Snake : public Figure
{
public:
	//int score = 0;
	SnakeDirection dir;
public:
	Snake();
	Snake(GameObject tail, int lenght, SnakeDirection _dir);
	void Move();
	GameObject GetNextPoint();
	void PressedButton();
	bool Eating(GameObject fruit);
	bool IsHitYourself();
	//int GetScore();
	~Snake();
};

