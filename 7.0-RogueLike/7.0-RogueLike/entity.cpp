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

}
