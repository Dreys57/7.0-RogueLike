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

	//5th Wall
	map[17][55] = wall;
	map[17][54] = wall;
	map[17][53] = wall;
	map[17][52] = wall;
	map[17][51] = wall;
	map[17][50] = wall;
	map[17][49] = wall;
	map[16][55] = wall;
	map[16][54] = wall;
	map[16][53] = wall;
	map[16][52] = wall;
	map[16][51] = wall;
	map[16][50] = wall;
	map[16][49] = wall;
	map[18][52] = wall;
	map[15][52] = wall;
	map[14][52] = wall;
	map[18][51] = wall;
	map[15][51] = wall;
	map[14][51] = wall;
	map[18][50] = wall;
	map[15][50] = wall;
	map[14][50] = wall;
	map[15][49] = wall;
	map[14][49] = wall;
	map[15][48] = wall;
	map[14][48] = wall;
	map[15][47] = wall;
	map[14][47] = wall;
	map[15][46] = wall;
	map[14][46] = wall;
	map[15][45] = wall;
	map[14][45] = wall;

	//6th Wall
	map[17][25] = wall;
	map[17][24] = wall;
	map[17][23] = wall;
	map[17][22] = wall;
	map[17][21] = wall;
	map[17][20] = wall;
	map[17][19] = wall;
	map[16][25] = wall;
	map[16][24] = wall;
	map[16][23] = wall;
	map[16][22] = wall;
	map[16][21] = wall;
	map[16][20] = wall;
	map[16][19] = wall;
	map[18][22] = wall;
	map[15][22] = wall;
	map[14][22] = wall;
	map[18][21] = wall;
	map[15][21] = wall;
	map[14][21] = wall;
	map[18][20] = wall;
	map[15][20] = wall;
	map[14][20] = wall;
	map[15][19] = wall;
	map[14][19] = wall;
	map[15][18] = wall;
	map[14][18] = wall;
	map[15][17] = wall;
	map[14][17] = wall;
	map[15][16] = wall;
	map[14][16] = wall;
	map[15][15] = wall;
	map[14][15] = wall;

	//7th Wall
	map[2][4] = wall;
	map[2][5] = wall;
	map[2][6] = wall;
	map[2][7] = wall;
	map[2][8] = wall;
	map[2][9] = wall;
	map[2][10] = wall;
	map[2][11] = wall;
	map[2][12] = wall;
	map[2][13] = wall;
	map[2][14] = wall;
	map[2][15] = wall;
	map[2][16] = wall;
	map[2][17] = wall;
	map[2][18] = wall;
	map[2][19] = wall;
	map[2][20] = wall;
	map[2][21] = wall;
	map[2][22] = wall;
	map[2][23] = wall;
	map[2][4] = wall;
	map[3][4] = wall;
	map[4][4] = wall;
	map[5][4] = wall;
	map[6][4] = wall;
	map[7][4] = wall;
	map[8][4] = wall;
	map[9][4] = wall;
	map[10][4] = wall;
	map[11][4] = wall;
	map[12][4] = wall;
	map[13][4] = wall;
	map[14][4] = wall;
	map[15][4] = wall;
	map[16][4] = wall;
	map[17][4] = wall;
	map[18][4] = wall;

	//8th Wall
	map[1][52] = wall;
	map[1][51] = wall;
	map[1][50] = wall;
	map[1][49] = wall;
	map[1][48] = wall;
	map[1][47] = wall;
	map[1][46] = wall;
	map[1][45] = wall;
	map[1][44] = wall;
	map[2][54] = wall;
	map[2][55] = wall;
	map[2][56] = wall;
	map[2][57] = wall;
	map[2][53] = wall;
	map[2][52] = wall;
	map[2][57] = wall;
	map[3][57] = wall;
	map[4][57] = wall;
	map[5][57] = wall;
	map[6][57] = wall;
	map[7][57] = wall;
	map[8][57] = wall;
	map[9][57] = wall;
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
