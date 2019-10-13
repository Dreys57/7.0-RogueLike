#include "map.h"
#include "player.h"
#include <iostream>


int main()
{
	Player player = Player();

	Map map = Map();

	bool win = false;

	while (!win && player.isAlive())
	{
		map.PrintMap(player);

		map.Menu(player.health);

		map.UpdateMap(player);

		player.Move();

		map.hasWon(player, win);

		system("cls");
	}

	system("pause");
	return EXIT_SUCCESS;
}