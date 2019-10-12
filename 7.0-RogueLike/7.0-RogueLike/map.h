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

	char wall_ = '#';

	struct Position
	{
		int x;

		int y;
	};

	void GenerateWall();

	void PrintMap(Player player);

	void Menu(int playerhealth);

	bool isWall();

private:

	int length_ = 20;

	int width_ = 60;

	std::vector<std::vector<char> > mapVec_;

};