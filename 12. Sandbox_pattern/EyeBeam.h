#pragma once
#include "SuperPower.h"
class EyeBeam : public SuperPower
{
public:
	void Active() override;
	void Init(Human human);
};

