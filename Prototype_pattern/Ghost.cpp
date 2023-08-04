#include "Ghost.h"

Ghost::Ghost(int health, int speed)
{
	this->health = health;
	this->speed = speed;
}

Monster* Ghost::Clone()
{
	return new Ghost(health, speed);
}