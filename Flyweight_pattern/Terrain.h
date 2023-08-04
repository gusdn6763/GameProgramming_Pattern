#pragma once
class Terrain
{

public:
	void SetWater(bool bCheck);
	bool GetWater();

private:
	bool bIsWater = false;
};

