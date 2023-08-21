#pragma once
#include "Monster.h"
class Ghost : public Monster
{
private:
	int maxHealth;
	int currentHealth;
	int speed;

public:
	Ghost(int health, int speed);
	Monster* Clone() override;
};

