#include "Breed.h"
#include "Monster.h"

Monster* Breed::NewMonster()
{ 
	return new Monster(*this); 
};