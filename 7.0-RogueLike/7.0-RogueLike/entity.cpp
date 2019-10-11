#include "entity.h"
#include "map.h"
#include "player.h"
#include <iostream>



Entity::Entity()
{
	Position pos;
}

bool Entity::isAlive(Player player)
{
	return player.health <= 0;
}

bool Entity::isTrap()
{
	return false;
}

bool Entity::isPotion()
{
	return false;
}

void Entity::Move(Entity& entity)
{
	char move;

	std::cin >> move;

	switch (move)
	{
	case 'w':

		TestMove(entity.);

		break;

	case 'a':

		TestMove(player.posX - 1, player.posY);

		break;

	case 's':

		TestMove(player.posX, player.posY + 1);

		break;

	case 'd':

		TestMove(player.posX + 1, player.posY);

		break;


	}
}

void Entity::TestMove(Entity& entity, int newPosX, int newPosY)
{
	if (isWall())
	{

	}
	else if (isPotion())
	{

	}
	else if (isTrap())
	{

	}
	else
	{
		mapVec_[newPosX][newPosY] = entity.sprite;
	}


}
