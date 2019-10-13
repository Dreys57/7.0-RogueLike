#include "potion.h"
#include "map.h"
#include "player.h"
#include "trap.h"

Trap::Trap()
{
	sprite = '!';
	damage = 30;
	posTrap.x = 3;
	posTrap.y = 3;
}

void Trap::TakeDamage(int health)
{
	int minHealth = 0;

	health -= damage;

	if (health < minHealth)
	{
		health = minHealth;
	}
}
