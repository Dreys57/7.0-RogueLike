#include "potion.h"
#include "map.h"
#include "player.h"
#include "trap.h"

Trap::Trap()
{
	int randPosX = (rand() % 58) + 1;
	int randPosY = (rand() % 18) + 1;

	sprite = '. ';

	damage = 30;

	posTrap.x = randPosX;
	posTrap.y = randPosY;
}

void Trap::DamagePlayer(int health)
{
	int minHealth = 0;

	health -= damage;

	if (health < minHealth)
	{
		health = minHealth;
	}
}
