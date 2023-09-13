#pragma once
class Breed
{
public:
	Breed(int health, const char* attack) : nHealth(health), cAttack(attack) 
	{

	}
	int GetHealth() {return nHealth;};
	const char* GetAttack() { return cAttack; };

private:
	int nHealth;
	const char* cAttack;
};

