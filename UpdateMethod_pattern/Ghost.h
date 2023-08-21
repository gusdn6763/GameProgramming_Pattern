#pragma once
#include "Enemy.h"
class Ghost : public Enemy
{
public:
	Ghost(int health) : Enemy(health) {}
	void Update() override;
};

