#include "Spawner.h"

Spawner::Spawner(Monster* monster)
{
	mobSpawn = monster;
}

Monster* Spawner::SpawnMonster()
{
	return mobSpawn;
}