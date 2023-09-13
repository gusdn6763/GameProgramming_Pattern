#pragma once

#include "Playable.h"

class Command
{
public:
	virtual void execute(Playable& obj) = 0;
};

class AttackCommand : public Command
{
	void execute(Playable& obj) override
	{
		obj.Attack();
	}
};

class JumpCommand : public Command
{
	void execute(Playable& obj) override
	{
		obj.Jump();
	}
};
