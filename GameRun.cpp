#include "stdafx.h"
#include "GameRun.h"
#include <iostream>
#include <conio.h>
#include <Windows.h>

GameRun::GameRun()
{
}

void GameRun::RunGame()
{

	// ����� ������� �������
	system("MODE CON COLS=80 LINES=25");
	int mapWidth = 78;
	int mapHeight = 23;
	// ����� ������ �����
	SnakeBoard board(mapWidth, mapHeight);
	//����������� �����
	board.Draw();

	//����� ���������� ������ ����
	GameObject point(4, 5, 'o');

	//��������� ��������� ����
	Snake snake(point, 4, SnakeDirection::RIGHT);
	//������������� ���� � �������
	snake.Draw();

	// �������� ����� ������ ����� ���������� �����
	Fruit fruit('@');
	// ������������ ��������������� ���������� ��� ������
	fruit.CreateFruit();
	// ����������� �����
	fruit.Draw();

	while (true)
	{
		// ��������� ���� �� ������������ �� ������� ��� � �������
		if (board.IsHit(snake) ||  snake.IsHitYourself())
		{
			system("cls");
			std::cout << "***  You loose  ***" << std::endl;
			break;
		}
		// ������� ������� ��������� ���� �� ������� � �������
		if (snake.Eating(fruit))
		{
			fruit.CreateFruit();
			fruit.Draw();
		}
		else
		{
			snake.Move();
		}
		Sleep(100);
		// ���� ������� ���� ������ �� ������ � ����
		if (_kbhit())
		{
			snake.PressedButton();
		}
	}
}


GameRun::~GameRun()
{
}
