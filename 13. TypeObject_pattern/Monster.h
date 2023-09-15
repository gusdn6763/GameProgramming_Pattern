#pragma once

#include <string>
#include <codecvt>
#include <iostream>
#include "json_define.h"
#include "Breed.h"

class Monster
{
    // friend class Breed;
public:
    Monster(const Breed& breed) : nHealth(breed.GetHealth()), breed(breed) {}
    wstring GetAttack() { return breed.GetAttack(); };

private:
    int nHealth;
    Breed breed;
};
