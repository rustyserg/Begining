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

	// задаю размеры консоли
	system("MODE CON COLS=80 LINES=25");
	int mapWidth = 78;
	int mapHeight = 23;
	// задаю размер доски
	SnakeBoard board(mapWidth, mapHeight);
	//отрисовываю доску
	board.Draw();

	//задаю координаты хвоста змеи
	GameObject point(4, 5, 'o');

	//создаетс€ экземпл€р змеи
	Snake snake(point, 4, SnakeDirection::RIGHT);
	//отрисовывание змеи в консоли
	snake.Draw();

	// указываю какой символ будет обозначать фрукт
	Fruit fruit('@');
	// генерируетс€ псевдорандомные координаты дл€ фрукта
	fruit.CreateFruit();
	// отрисовываю фрукт
	fruit.Draw();

	while (true)
	{
		// провер€ет было ли столкновение со стенкой или с хвостом
		if (board.IsHit(snake) ||  snake.IsHitYourself())
		{
			system("cls");
			std::cout << "***  You loose  ***" << std::endl;
			break;
		}
		// условие которое провер€ет была ли встреча с фруктом
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
		// если стрелка была нажата то входим в цикл
		if (_kbhit())
		{
			snake.PressedButton();
		}
	}
}


GameRun::~GameRun()
{
}
