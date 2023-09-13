#pragma once
#include "Playable.h"

class Mage : public Playable
{
public:
    void Attack() override;
    void Jump() override;
};