#include <iostream>
#include "Spawner.h"
#include "Ghost.h"

/*
������Ÿ�� ����
���� ��ü�� ���������� �߻�ȭ�����ν� ���⼺�� ���� 
(���͵��� �ϳ��� Spawner�� ��ü ��������)
*/
int main()
{
	Monster* ghost = new Ghost(20, 10);

	Spawner* mobSpawner = new Spawner();

	mobSpawner->SpawnMonster(ghost);

	return 0;
}