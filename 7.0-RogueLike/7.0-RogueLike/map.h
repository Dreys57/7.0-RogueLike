#pragma once
#include <iostream>
#include <vector>

class Player;

class Map
{
public:

	Map();
	~Map() {};

	void GenerateWall();

	void PrintMap(Player player);

	bool isWall();

private:

	int length_ = 20;

	int width_ = 60;

	std::vector<std::vector<char> > mapVec_;

	char wall_ = '#';
};