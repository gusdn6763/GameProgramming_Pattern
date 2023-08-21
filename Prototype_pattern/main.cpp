#include <iostream>
#include "Spawner.h"
#include "Ghost.h"

int main()
{
	Monster* ghost = new Ghost(20, 10);
	Spawner* ghostSpawner = new Spawner(ghost);

	return 0;
}