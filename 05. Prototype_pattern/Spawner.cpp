#include "Spawner.h"

Spawner::Spawner()
{
}

Monster* Spawner::SpawnMonster(Monster* mob)
{
	return mob->Clone();
}