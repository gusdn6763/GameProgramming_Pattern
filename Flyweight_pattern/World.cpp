#include "World.h"

World::World()
{
	water.SetWater(true);
	Generate();
}

void World::Generate()
{
	for (int i = 0; i < WIDTH; i++)
	{
		for (int j = 0; j < HEIGHT; j++)
		{
			tiles[i][j] = &grass;

			if (i == 0 && j == 0)
				tiles[i][j] = &water;
		}
	}
}