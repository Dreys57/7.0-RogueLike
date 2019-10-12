#include "map.h"
#include "player.h"
#include <iostream>


int main()
{
	Map map = Map();
	Player player = Player();

	map.PrintMap(player);
	map.Menu(player.health);

	system("pause");
	return EXIT_SUCCESS;
}