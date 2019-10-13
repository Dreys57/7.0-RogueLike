#pragma once
#include <iostream>
#include <vector>

class Player;

class Map
{
public:

	Map();
	~Map() {};

	char sprite;

	char door = 'X';
	char wall = '#';
	char ground = '.';

	struct Position
	{
		int x;

		int y;
	};

	void GenerateWall();

	void PrintMap(Player player);

	void Menu(int playerHealth);

	void UpdateMap(Player player);

	bool isWall(int newPosX, int newPosY);

	bool hasWon(Player player, bool win);

	std::vector<std::vector<char> > mapVec_;

private:

	int length_ = 20;

	int width_ = 60;


};