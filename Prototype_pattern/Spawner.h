#pragma once
#include "Monster.h"

class Spawner
{
public:
	virtual ~Spawner();
	virtual Monster* SpawnMonster() = 0;
};

template <class T>
class SpawnerFor : public Spawner
{
public:
	virtual ~SpawnerFor();
	template <class T>
	Monster* SpawnMonster() { return new T(); }
};

