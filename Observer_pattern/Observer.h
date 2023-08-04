#pragma once

#include <iostream>
#include <string>

using namespace std;

class Observer
{
public:
	virtual ~Observer() {}
	virtual void onNotify(std::string name, int value) = 0;
};