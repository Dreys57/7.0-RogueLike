#include <iostream>
#include "player.h"
#include "map.h"

Player::Player()
{
	sprite = '@';
	health = 100;

	pos.x = 1;
	pos.y = 1;

}

void Player::PickUp()
{
}

void Player::TakeDamage()
{
}

void Player::PlayerMovement()
{
	char move;

	std::cin >> move;

	switch (move)
	{
	case('w'):
		pos.x = pos.x - 1;
		pos.y = pos.y;
		break;

	case('a'):
		pos.x = pos.x;
		pos.y = pos.y - 1;
		break;
	case('s'):
		pos.x = pos.x + 1;
		pos.y = pos.y;
		break;
	case('d'):
		pos.x = pos.x;
		pos.y = pos.y + 1;
		break;
	}
}

