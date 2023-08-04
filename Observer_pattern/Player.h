#pragma once

#include "Observer.h"
#include "GameObject.h"
#include "Subject.h"

class Player : public GameObject, public Subject
{
public:
	Player();

	void SetGold(int newGold);
	void SetHealth(int newHealth);

private: 
	int nGold;
	int nHealth;
};

