#pragma once

#include <iostream>

using namespace std;

class Playable
{
public:
    virtual void Attack() = 0;
    virtual void Jump() = 0;
};