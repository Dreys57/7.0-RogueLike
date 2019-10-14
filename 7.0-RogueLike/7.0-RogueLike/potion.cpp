#include "potion.h"
#include "map.h"
#include "player.h"

Potion::Potion()
{
	/*int randPosX = (rand() % 58) + 1;
	int randPosY = (rand() % 18) + 1;*/

	sprite = '+';

	healthGain = 20;

	/*posHealth.x = randPosX;
	posHealth.y = randPosY;*/
	
}

void Potion::RegenHealth(int health)
{
	int maxHealth = 100;
	
	health += healthGain;

	if (health > maxHealth)
	{
		health = maxHealth;
	}

}

