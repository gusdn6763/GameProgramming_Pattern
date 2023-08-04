#pragma once

#include "Observer.h"

class Achievements : public Observer
{
public:
    void onNotify(std::string name, int value) override;
};