#pragma once

enum SnakeDirection { LEFT, RIGHT, UP, DOWN };

class GameObject
{
public:
	int x;
	int y;
	char symbol;
public:
	GameObject();
	GameObject(int _x, int _y, char _symbol);
	void MakeMove(int offset, SnakeDirection dir);
	void Draw();
	void ClearScreen();
	bool IsHit(GameObject fruit);
	~GameObject();
};

