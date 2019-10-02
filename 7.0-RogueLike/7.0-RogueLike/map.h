#pragma once
#ifndef map_h
#define map_h
#endif
#include <vector>
#include <time.h>

std::vector<std::vector<char> > map(20, std::vector<char>(60));
char wall = '#';

void Wall()
{
	//1st Wall
	map[10][40] = wall;
	map[10][39] = wall;
	map[10][38] = wall;
	map[10][37] = wall;
	map[10][36] = wall;
	map[10][35] = wall;
	map[11][40] = wall;
	map[11][39] = wall;
	map[11][38] = wall;
	map[11][37] = wall;
	map[11][36] = wall;
	map[11][35] = wall;
	map[11][41] = wall;
	map[11][42] = wall;
	map[11][43] = wall;
	map[11][44] = wall;
	map[11][45] = wall;
	map[11][46] = wall;

	//2nd Wall
	map[5][22] = wall;
	map[5][23] = wall;
	map[5][24] = wall;
	map[5][25] = wall;
	map[5][26] = wall;
	map[5][27] = wall;
	map[5][28] = wall;
	map[5][29] = wall;
	map[5][30] = wall;
	map[6][21] = wall;
	map[6][22] = wall;
	map[6][23] = wall;
	map[6][24] = wall;
	map[6][25] = wall;
	map[6][26] = wall;

	//3rd Wall
	map[12][35] = wall;
	map[11][35] = wall;
	map[10][35] = wall;
	map[9][35] = wall;
	map[8][35] = wall;
	map[12][35] = wall;
	map[11][34] = wall;
	map[10][33] = wall;
	map[9][32] = wall;
	map[8][31] = wall;
	map[11][36] = wall;
	map[10][37] = wall;
	map[9][38] = wall;
	map[8][39] = wall;
	map[7][40] = wall;

	//4th Wall
	map[4][15] = wall;
	map[4][16] = wall;
	map[4][17] = wall;
	map[4][18] = wall;
	map[4][19] = wall;
	map[4][20] = wall;
	map[5][15] = wall;
	map[5][16] = wall;
	map[6][15] = wall;
	map[6][16] = wall;
	map[7][15] = wall;
	map[7][16] = wall;
	map[8][15] = wall;
	map[8][16] = wall;
	map[9][15] = wall;
	map[9][16] = wall;
	map[10][15] = wall;
	map[10][16] = wall;
}

void Map()
{
	std::cout << "_______________________________________________________________\n";

	for (int i = 0; i < map.size(); i++)
	{
		std::cout << "| ";
		for (int j = 0; j < map[i].size(); j++)
		{
			map[i][j] = '.';

			Wall();
			std::cout << map[i][j];
		}
		std::cout << " |" << "\n";
	}
	std::cout << "_______________________________________________________________\n";

}
