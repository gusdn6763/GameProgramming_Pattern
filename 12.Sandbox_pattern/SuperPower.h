#pragma once

#include <string>
#include "Human.h"

using namespace std;

class SuperPower
{
public:
	virtual void Active() = 0;

protected:
	Human human;	//대상

	void PlaySound(string sound);
	void StopSound();
	virtual void Init(Human human) {};	//예를들어 상호작용 대상

};

