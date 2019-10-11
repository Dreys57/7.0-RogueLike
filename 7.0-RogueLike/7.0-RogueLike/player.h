#pragma once
#include "map.h"
#include <iostream>
#include <vector>

class Player : public Map
{
public:

	Player();
	~Player() {};

	void PickUp();

	void TakeDamage();

	char sprite;

	int posX;

	int posY;

private:


	int health_;


};