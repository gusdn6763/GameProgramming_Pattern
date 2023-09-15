#pragma once

#include <string>

using namespace std;

class Monster;

class Breed
{
public:
    Breed(int health, const wstring& attack) : nHealth(health), cAttack(attack) {}

    int GetHealth() const { return nHealth; };
    Monster* NewMonster();
    wstring& GetAttack() { return cAttack; };

private:
    int nHealth;
    wstring cAttack;
};