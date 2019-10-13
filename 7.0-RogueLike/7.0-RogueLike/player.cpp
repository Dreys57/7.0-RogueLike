#include <iostream>
#include "player.h"
#include "map.h"

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

bool Player::isTrap()
{
	return false;
}

bool Player::isPotion()
{
	return false;
}

void Player::PickUp()
{
	char pick;

	std::cout << "There is a potion there, do you want to pick it up? (y/n)\n";
	std::cin >> pick;

	switch (pick)
	{
	case 'y':

		//call potion.RegenHealth(player.health) and erase the potion

		break;

	case 'n':

		//erase the potion

		break;

	default:

		std::cout << "You missed a chance, now the potion is gone.\n";
	}
}

void Player::TakeDamage()
{
	//call trap.DamagePlayer(player.health)
}

void Player::Move()
{
	char move;

	std::cin >> move;

	switch (move)
	{
	case('w'):

		TestMove(posPlayer.x - 1, posPlayer.y);

		break;

	case('a'):

		TestMove(posPlayer.x, posPlayer.y - 1);

		break;

	case('s'):

		TestMove(posPlayer.x + 1, posPlayer.y);

		break;

	case('d'):

		TestMove(posPlayer.x, posPlayer.y + 1);

		break;
	}
}

void Player::TestMove(int newPosX, int newPosY)
{
	if (isWall(newPosX, newPosY))
	{
		std::cout << "There is a wall in your way, you can't go through.\n";
	}
	else if (isPotion())
	{
		PickUp();

		posPlayer.x = newPosX;
		posPlayer.y = newPosY;
	}
	else if (isTrap())
	{
		TakeDamage();

		posPlayer.x = newPosX;
		posPlayer.y = newPosY;
	}
	else
	{
		posPlayer.x = newPosX;
		posPlayer.y = newPosY;
	}
}

