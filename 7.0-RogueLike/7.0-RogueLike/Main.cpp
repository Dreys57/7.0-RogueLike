#include "map.h"
#include "potion.h"
#include "trap.h"
#include "player.h"
#include <iostream>


int main()
{
	Player player = Player();

	Map map = Map();

	Potion potion = Potion();

	Trap trap = Trap();

	bool win = false;

	while (!win && player.isAlive())
	{
		map.PrintMap(player);

		map.Menu(player.health);

		map.UpdateMap(player);

		potion.RegenHealth(player.health);

		trap.TakeDamage(player.health);

		player.Move();

		map.hasWon(player, win);

		system("cls");
	}

	system("pause");
	return EXIT_SUCCESS;
}