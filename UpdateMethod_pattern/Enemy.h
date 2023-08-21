#pragma once
class Enemy
{
private:
	int maxHealth;

public:
	Enemy(int Health);

	virtual void Update() = 0;
};

