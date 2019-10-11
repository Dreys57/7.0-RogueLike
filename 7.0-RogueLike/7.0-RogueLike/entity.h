#pragma once
#include "map.h"
#include "trap.h"
#include "potion.h"
#include <iostream>
#include <vector>

class Entity : public Map
{
public:

	Entity();
	~Entity() {};

	char sprite;

	int health;

	bool isAlive(Player player);
	bool isTrap();
	bool isPotion();

	void Move(Entity& entity);
	void TestMove(Entity& entity, int newPosX, int newPosY);
};