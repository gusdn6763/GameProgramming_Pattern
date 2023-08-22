#pragma once

#include <string>
#include "Human.h"

using namespace std;

class SuperPower
{
public:
	virtual void Active() = 0;

protected:
	Human human;	//���

	void PlaySound(string sound);
	void StopSound();
	virtual void Init(Human human) {};	//������� ��ȣ�ۿ� ���

};

