#pragma once
#include "map.h"
#include "entity.h"
#include <iostream>
#include <vector>

class Player : public Entity
{
public:

	Player();
	~Player() {};

	void PickUp();

	void TakeDamage();

	

	int posX;

	int posY;

};