#include "Achievement.h"

void Achievements::onNotify(std::string name, int value)
{
	if (name == "Gold" && value > 1000)
		cout << "1000��� ���� �޼�" << endl;
	else if (name == "Health" && value > 1000)
		cout << "�ִ�ü�� 1000 �޼�" << endl;
}
