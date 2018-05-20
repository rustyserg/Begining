#pragma once
#include "Figure.h"

class HorisontLine : public Figure
{
public:
	HorisontLine();
	HorisontLine(int Xleft, int XRight, int y, char symbol);
	~HorisontLine();
};

