#include "stdafx.h"
#include "HorisontLine.h"


HorisontLine::HorisontLine()
{
}

HorisontLine::HorisontLine(int Xleft, int XRight, int y, char symbol)
{
	for (int x = Xleft; x <= XRight; x++)
	{
		GameObject point(x, y, symbol);
		objectVec.push_back(point);
	}
}

HorisontLine::~HorisontLine()
{
}
