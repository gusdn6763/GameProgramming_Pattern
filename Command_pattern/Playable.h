#pragma once
#include "GameObject.h"

class Playable : public GameObject
{
public:
    virtual void Attack() = 0;
    virtual void Jump() = 0;
};