#include "stdafx.h"
#include "VerticalLine.h"

VerticalLine::VerticalLine()
{
}

VerticalLine::VerticalLine(int YUp, int YDown, int x, char symbol)
{
	for (int y = YUp; y <= YDown; y++) 
	{
		GameObject object(x, y, symbol);
		objectVec.push_back(object);
	}
}

VerticalLine::~VerticalLine()
{
}
