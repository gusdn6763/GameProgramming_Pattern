#pragma once

#include "json_define.h"
#include "Breed.h"

class Monster
{
public:
	Monster(Breed& breed) : nHealth(breed.GetHealth()), breed(breed) {}
	const char* GetAttack() { return breed.GetAttack(); };

private:
	int nHealth;
	Breed& breed;
};

