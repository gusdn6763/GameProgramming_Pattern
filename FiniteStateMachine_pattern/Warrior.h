#pragma once
#include "Playable.h"

class Warrior : public Playable
{
public:
    Warrior();

    void Attack() override;
    void Jump() override;
};

