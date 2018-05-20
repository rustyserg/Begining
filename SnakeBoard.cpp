#include "stdafx.h"
#include "SnakeBoard.h"


SnakeBoard::SnakeBoard()
{
}

SnakeBoard::SnakeBoard(int mapWidth, int mapHeight)
{
	// ���������� ������ ����
	HorisontLine upLine(0, mapWidth, 0, '+');
	VerticalLine leftLine(0, mapHeight, 0, '+');
	HorisontLine downLine(0, mapWidth, mapHeight, '+');
	VerticalLine rightLine(0, mapHeight, mapWidth, '+');

	// �������� � ������ ����� 4 �����
	board.push_back(upLine);
	board.push_back(leftLine);
	board.push_back(downLine);
	board.push_back(rightLine);
}

void SnakeBoard::Draw()
{
	for (auto x : board) 
	{
		x.Draw();
	}
}

// ���� �� ������������ ������(�������������� ��� ������������ �����) � �����
bool SnakeBoard::IsHit(Figure snake)
{
	for (auto line : board) 
	{
		if (line.IsHit(snake))
		{
			return true;
		}
	}
	return false;
}

SnakeBoard::~SnakeBoard()
{
}
