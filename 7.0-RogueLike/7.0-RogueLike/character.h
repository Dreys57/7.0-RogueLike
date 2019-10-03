#pragma once
class Character
{
public:

	Character();
	~Character() {};

	bool isAlive();

	void Move();

	void PickUp();

private:

	char sprite_ = '@';
	int health_ = 50;

};