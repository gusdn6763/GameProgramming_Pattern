#include "Ghost.h"

Ghost::Ghost(int health, int speed)
{
	this->maxHealth = health;
	this->currentHealth = health;
	this->speed = speed;
}

Monster* Ghost::Clone()
{
	return new Ghost(maxHealth, speed);
}