#include <iostream>
#include "InputHandler.h"
#include "Warrior.h"

/*
��������
���¸� ��üȭ
*/

/*
����1: �÷��̾�� �ٸ� ĳ���� ��������
����2: �÷��̾�� Ű�� ���� ����
*/
int main()
{
	Warrior player;
	InputHandler input;

	Command *command = input.HandleInput('a');

	command->execute(player);

	return 0;
}