#pragma once
#include "map.h"
#include <iostream>
#include <vector>

class Map;

class Player : public Map
{
public:

	Player();
	~Player() {};

	int health;

	bool isAlive();
	bool isTrap();
	bool isPotion();

	void PickUp();

	void TakeDamage();

	void Move();

	void TestMove(int newPosX, int newPosY);

	Position posPlayer;

};