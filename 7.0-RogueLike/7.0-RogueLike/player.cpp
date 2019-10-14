#include <iostream>
#include "player.h"
#include "map.h"
#include "potion.h"
#include "trap.h"

Player::Player()
{
	sprite = '@';
	health = 100;

	posPlayer.x = 1;
	posPlayer.y = 1;

}

bool Player::isAlive()
{
	return health > 0;
}

void Player::PickUp(Potion potion)
{
	char pick;

	std::cout << "There is a potion there, do you want to pick it up? (y/n)\n";
	std::cin >> pick;

	switch (pick)
	{
	case 'y':

		potion.RegenHealth(health);

		break;

	case 'n':

		std::cout << "Your choice.\n";

		break;

	default:

		std::cout << "You missed a chance, now the potion is gone.\n";
	}
}

void Player::TakeDamage(Trap trap)
{
	std::cout << "You walked on a trap and lost" << trap.damage << "\n";

	trap.DamagePlayer(health);
}

void Player::Move(Potion potion, Trap trap)
{
	char move;

	std::cin >> move;

	switch (move)
	{
	case('w'):

		TestMove(posPlayer.x - 1, posPlayer.y, potion, trap);

		break;

	case('a'):

		TestMove(posPlayer.x, posPlayer.y - 1, potion, trap);

		break;

	case('s'):

		TestMove(posPlayer.x + 1, posPlayer.y, potion, trap);

		break;

	case('d'):

		TestMove(posPlayer.x, posPlayer.y + 1, potion, trap);

		break;
	}
}

void Player::TestMove(int newPosX, int newPosY, Potion potion, Trap trap)
{
	if (isWall(newPosX, newPosY))
	{
		std::cout << "There is a wall in your way, you can't go through.\n";
	}
	else if (isPotion(newPosX, newPosY))
	{
		PickUp(potion);

		posPlayer.x = newPosX;
		posPlayer.y = newPosY;
	}
	else if (isTrap(newPosX, newPosY))
	{
		TakeDamage(trap);

		posPlayer.x = newPosX;
		posPlayer.y = newPosY;
	}
	else
	{
		posPlayer.x = newPosX;
		posPlayer.y = newPosY;
	}
}

