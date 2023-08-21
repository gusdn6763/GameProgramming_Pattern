#pragma once
#include "Monster.h"
class Spawner 
{
public:
    Spawner(Monster* prototype);

    Monster* SpawnMonster();

private:
    Monster* mobSpawn;
};