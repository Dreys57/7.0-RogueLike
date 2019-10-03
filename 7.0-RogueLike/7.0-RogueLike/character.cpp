#include "character.h"
#include "map.h"
#include <iostream>

Character::Character()
{

}

bool Character::isAlive()
{
	return health_ > 0;
}

void Character::Move()
{
	char button;

	std::cin >> button;

	switch (button)
	{
	case 'w':

		

		break;

	case 'a':

		break;

	case 's':

		break;

	case 'd':

		break;
	}
}

void Character::PickUp()
{

}
