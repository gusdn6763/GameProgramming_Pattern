#include "Achievement.h"

void Achievements::onNotify(std::string name, int value)
{
	if (name == "Gold" && value > 1000)
		cout << "1000골드 업적 달성" << endl;
	else if (name == "Health" && value > 1000)
		cout << "최대체력 1000 달설" << endl;
}
