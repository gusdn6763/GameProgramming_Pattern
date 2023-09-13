#pragma once
#include "terrain.h"

#define WIDTH 10
#define HEIGHT 10

class World
{
public:
	World();
	~World();

private:
	Terrain* tiles[WIDTH][HEIGHT];
	Terrain grass;
	Terrain water;

private:
	void Generate();
};

