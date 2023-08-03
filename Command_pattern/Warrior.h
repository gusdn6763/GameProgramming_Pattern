#pragma once
#include "Playable.h"

class Warrior : public Playable
{
public:
    void Attack() override;
    void Jump() override; 
};

