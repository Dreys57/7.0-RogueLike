#include "map.h"
#include "player.h"


Map::Map() :
	mapVec_(length_, std::vector<char>(width_))
{


	for (int i = 0; i < length_; i++)
	{
		for (int j = 0; j < width_; j++)
		{
			mapVec_[i][j] = '.';
		}
	}

	GenerateWall();




}

void Map::GenerateWall()
{
	//1st Wall
	mapVec_[10][40] = wall_;
	mapVec_[10][39] = wall_;
	mapVec_[10][38] = wall_;
	mapVec_[10][37] = wall_;
	mapVec_[10][36] = wall_;
	mapVec_[10][35] = wall_;
	mapVec_[11][40] = wall_;
	mapVec_[11][39] = wall_;
	mapVec_[11][38] = wall_;
	mapVec_[11][37] = wall_;
	mapVec_[11][36] = wall_;
	mapVec_[11][35] = wall_;
	mapVec_[11][41] = wall_;
	mapVec_[11][42] = wall_;
	mapVec_[11][43] = wall_;
	mapVec_[11][44] = wall_;
	mapVec_[11][45] = wall_;
	mapVec_[11][46] = wall_;

	//2nd Wall
	mapVec_[5][22] = wall_;
	mapVec_[5][23] = wall_;
	mapVec_[5][24] = wall_;
	mapVec_[5][25] = wall_;
	mapVec_[5][26] = wall_;
	mapVec_[5][27] = wall_;
	mapVec_[5][28] = wall_;
	mapVec_[5][29] = wall_;
	mapVec_[5][30] = wall_;
	mapVec_[6][21] = wall_;
	mapVec_[6][22] = wall_;
	mapVec_[6][23] = wall_;
	mapVec_[6][24] = wall_;
	mapVec_[6][25] = wall_;
	mapVec_[6][26] = wall_;

	//3rd Wall
	mapVec_[12][35] = wall_;
	mapVec_[11][35] = wall_;
	mapVec_[10][35] = wall_;
	mapVec_[9][35] = wall_;
	mapVec_[8][35] = wall_;
	mapVec_[12][35] = wall_;
	mapVec_[11][34] = wall_;
	mapVec_[10][33] = wall_;
	mapVec_[9][32] = wall_;
	mapVec_[8][31] = wall_;
	mapVec_[11][36] = wall_;
	mapVec_[10][37] = wall_;
	mapVec_[9][38] = wall_;
	mapVec_[8][39] = wall_;
	mapVec_[7][40] = wall_;

	//4th Wall
	mapVec_[4][15] = wall_;
	mapVec_[4][16] = wall_;
	mapVec_[4][17] = wall_;
	mapVec_[4][18] = wall_;
	mapVec_[4][19] = wall_;
	mapVec_[4][20] = wall_;
	mapVec_[5][15] = wall_;
	mapVec_[5][16] = wall_;
	mapVec_[6][15] = wall_;
	mapVec_[6][16] = wall_;
	mapVec_[7][15] = wall_;
	mapVec_[7][16] = wall_;
	mapVec_[8][15] = wall_;
	mapVec_[8][16] = wall_;
	mapVec_[9][15] = wall_;
	mapVec_[9][16] = wall_;
	mapVec_[10][15] = wall_;
	mapVec_[10][16] = wall_;

	//5th Wall
	mapVec_[17][55] = wall_;
	mapVec_[17][54] = wall_;
	mapVec_[17][53] = wall_;
	mapVec_[17][52] = wall_;
	mapVec_[17][51] = wall_;
	mapVec_[17][50] = wall_;
	mapVec_[17][49] = wall_;
	mapVec_[16][55] = wall_;
	mapVec_[16][54] = wall_;
	mapVec_[16][53] = wall_;
	mapVec_[16][52] = wall_;
	mapVec_[16][51] = wall_;
	mapVec_[16][50] = wall_;
	mapVec_[16][49] = wall_;
	mapVec_[18][52] = wall_;
	mapVec_[15][52] = wall_;
	mapVec_[14][52] = wall_;
	mapVec_[18][51] = wall_;
	mapVec_[15][51] = wall_;
	mapVec_[14][51] = wall_;
	mapVec_[18][50] = wall_;
	mapVec_[15][50] = wall_;
	mapVec_[14][50] = wall_;
	mapVec_[15][49] = wall_;
	mapVec_[14][49] = wall_;
	mapVec_[15][48] = wall_;
	mapVec_[14][48] = wall_;
	mapVec_[15][47] = wall_;
	mapVec_[14][47] = wall_;
	mapVec_[15][46] = wall_;
	mapVec_[14][46] = wall_;
	mapVec_[15][45] = wall_;
	mapVec_[14][45] = wall_;

	//6th Wall
	mapVec_[17][25] = wall_;
	mapVec_[17][24] = wall_;
	mapVec_[17][23] = wall_;
	mapVec_[17][22] = wall_;
	mapVec_[17][21] = wall_;
	mapVec_[17][20] = wall_;
	mapVec_[17][19] = wall_;
	mapVec_[16][25] = wall_;
	mapVec_[16][24] = wall_;
	mapVec_[16][23] = wall_;
	mapVec_[16][22] = wall_;
	mapVec_[16][21] = wall_;
	mapVec_[16][20] = wall_;
	mapVec_[16][19] = wall_;
	mapVec_[18][22] = wall_;
	mapVec_[15][22] = wall_;
	mapVec_[14][22] = wall_;
	mapVec_[18][21] = wall_;
	mapVec_[15][21] = wall_;
	mapVec_[14][21] = wall_;
	mapVec_[18][20] = wall_;
	mapVec_[15][20] = wall_;
	mapVec_[14][20] = wall_;
	mapVec_[15][19] = wall_;
	mapVec_[14][19] = wall_;
	mapVec_[15][18] = wall_;
	mapVec_[14][18] = wall_;
	mapVec_[15][17] = wall_;
	mapVec_[14][17] = wall_;
	mapVec_[15][16] = wall_;
	mapVec_[14][16] = wall_;
	mapVec_[15][15] = wall_;
	mapVec_[14][15] = wall_;

	//7th Wall
	mapVec_[2][4] = wall_;
	mapVec_[2][5] = wall_;
	mapVec_[2][6] = wall_;
	mapVec_[2][7] = wall_;
	mapVec_[2][8] = wall_;
	mapVec_[2][9] = wall_;
	mapVec_[2][10] = wall_;
	mapVec_[2][11] = wall_;
	mapVec_[2][12] = wall_;
	mapVec_[2][13] = wall_;
	mapVec_[2][14] = wall_;
	mapVec_[2][15] = wall_;
	mapVec_[2][16] = wall_;
	mapVec_[2][17] = wall_;
	mapVec_[2][18] = wall_;
	mapVec_[2][19] = wall_;
	mapVec_[2][20] = wall_;
	mapVec_[2][21] = wall_;
	mapVec_[2][22] = wall_;
	mapVec_[2][23] = wall_;
	mapVec_[2][4] = wall_;
	mapVec_[3][4] = wall_;
	mapVec_[4][4] = wall_;
	mapVec_[5][4] = wall_;
	mapVec_[6][4] = wall_;
	mapVec_[7][4] = wall_;
	mapVec_[8][4] = wall_;
	mapVec_[9][4] = wall_;
	mapVec_[10][4] = wall_;
	mapVec_[11][4] = wall_;
	mapVec_[12][4] = wall_;
	mapVec_[13][4] = wall_;
	mapVec_[14][4] = wall_;
	mapVec_[15][4] = wall_;
	mapVec_[16][4] = wall_;
	mapVec_[17][4] = wall_;
	mapVec_[18][4] = wall_;

	//8th Wall
	mapVec_[1][52] = wall_;
	mapVec_[1][51] = wall_;
	mapVec_[1][50] = wall_;
	mapVec_[1][49] = wall_;
	mapVec_[1][48] = wall_;
	mapVec_[1][47] = wall_;
	mapVec_[1][46] = wall_;
	mapVec_[1][45] = wall_;
	mapVec_[1][44] = wall_;
	mapVec_[2][54] = wall_;
	mapVec_[2][55] = wall_;
	mapVec_[2][56] = wall_;
	mapVec_[2][57] = wall_;
	mapVec_[2][53] = wall_;
	mapVec_[2][52] = wall_;
	mapVec_[2][57] = wall_;
	mapVec_[3][57] = wall_;
	mapVec_[4][57] = wall_;
	mapVec_[5][57] = wall_;
	mapVec_[6][57] = wall_;
	mapVec_[7][57] = wall_;
	mapVec_[8][57] = wall_;
	mapVec_[9][57] = wall_;
}

void Map::PrintMap(Player player)
{
	std::cout << "_______________________________________________________________\n";

	for (int i = 0; i < length_; i++)
	{
		std::cout << "| ";
		for (int j = 0; j < width_; j++)
		{
			std::cout << mapVec_[i][j];
		}
		mapVec_[player.pos.x][player.pos.y] = player.sprite;
		std::cout << " |" << "\n";
	}
	std::cout << "_______________________________________________________________\n";
}

bool Map::isWall()
{
	return false;
}

void Map::Menu(int playerHealth)
{
	std::cout << " _____________________________________________________\n";
	std::cout << "|                                                     |\n";
	std::cout << "|                Health :" << playerHealth << "                          |\n";
	std::cout << "|                                                     |\n";
	std::cout << "|     To move:                                        |\n";
	std::cout << "|                                                     |\n";
	std::cout << "|         w = up                  s = down            |\n";
	std::cout << "|         a = left                d = right           |\n";
	std::cout << " _____________________________________________________\n";
}