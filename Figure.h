#pragma once
#include <vector>
#include "GameObject.h"

class Figure
{
protected:
	std::vector <GameObject> objectVec;
public:
	Figure();
	void Draw();
	bool IsHit(Figure figure);
	bool IsHit(GameObject object);
	~Figure();
};

