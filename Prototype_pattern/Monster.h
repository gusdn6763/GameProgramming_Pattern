#pragma once
class Monster
{
public:
	virtual ~Monster();
	virtual Monster* Clone() = 0;
};

