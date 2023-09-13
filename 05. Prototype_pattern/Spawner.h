#pragma once
#include "Monster.h"
class Spawner 
{
public:
    Spawner();

    Monster* SpawnMonster(Monster* mob);
};