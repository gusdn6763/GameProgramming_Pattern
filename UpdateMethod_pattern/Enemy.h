#pragma once
class Enemy
{
private:
	int maxHealth;
	bool isDie = false;
	bool isActive = false;

public:
	Enemy(int Health);

	virtual void Update() = 0;
};

