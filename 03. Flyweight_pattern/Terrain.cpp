#include "Terrain.h"

void Terrain::SetWater(bool bCheck)
{
	bIsWater = bCheck;
}

bool Terrain::GetWater()
{
	return bIsWater;
}