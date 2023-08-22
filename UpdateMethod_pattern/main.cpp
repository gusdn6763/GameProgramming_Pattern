#include <iostream>
#include <vector>
#include "Ghost.h"
#include "Goblin.h"

/*
������Ʈ �޼��� ����
* �� ��ü���� �������϶� ȿ����
* �ð��� �帧�� ���� �ùķ��̼��϶� ȿ����
*/

//�߰��ؾ��� ����Ʈ
//��Ȱ��ȭ ��ü�� ���� ���
//�÷��� ������ Update �κп� ���� ��ü ��� ����
int main()
{
	Enemy* goblin1 = new Goblin(10);
	Enemy* ghost1 = new Ghost(10);

	std::vector<Enemy*> stateList;

	stateList.push_back(goblin1);
	stateList.push_back(ghost1);

	for (int i = 0; i < stateList.size(); i++)
	{
		stateList[i]->Update();
	}

	return 0;
}