#include "map.h"
#include "player.h"
#include <iostream>


int main()
{
	Map map = Map();
	Player player = Player();

	map.PrintMap(player);

	system("pause");
	return EXIT_SUCCESS;
}