#pragma once
#include "Figure.h"

class VerticalLine : public Figure
{
public:
	VerticalLine();
	VerticalLine(int YUp, int YDown, int x, char symbol);
	~VerticalLine();
};

