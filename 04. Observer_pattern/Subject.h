#pragma once

#include "Observer.h"
#include <list>

class Subject
{
protected:
	std::list<Observer*> observers;

public:
	virtual void AddObserver(Observer* observer);
	virtual void RemoveObserver(Observer* observer);

protected:
	virtual void Notify(std::string name, int value);
};

