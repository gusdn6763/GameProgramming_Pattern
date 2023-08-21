#pragma once
#include "Enemy.h"

class Goblin : public Enemy
{
public:
	Goblin(int health) : Enemy(health) {}
	void Update() override;
};

