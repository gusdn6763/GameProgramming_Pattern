#include "Subject.h"

void Subject::Notify(std::string name, int value)
{
	for (Observer* observer : observers)
		observer->onNotify(name, value);
}

void Subject::AddObserver(Observer* observer)
{
	observers.push_back(observer);
}

void Subject::RemoveObserver(Observer* observer)
{
	observers.remove(observer);
}