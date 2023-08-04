#include <iostream>
#include "Spawner.h"
#include "Ghost.h"

int main()
{
	Spawner* ghostSpawner = new SpawnerFor<Ghost>();
	return 0;
}