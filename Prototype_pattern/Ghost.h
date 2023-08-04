#pragma once
#include "Monster.h"
class Ghost : public Monster
{
private:
	int health;
	int speed;

public:
	Ghost(int health, int speed);
	Monster* Clone() override;
};

