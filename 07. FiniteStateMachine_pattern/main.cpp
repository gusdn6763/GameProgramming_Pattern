#include <iostream>
#include "InputHandler.h"
#include "Warrior.h"

/*
상태패턴
상태를 객체화
*/

/*
조건1: 플레이어는 다른 캐릭터 조절가능
조건2: 플레이어는 키를 변경 가능
*/
int main()
{
	Warrior player;
	InputHandler input;

	Command *command = input.HandleInput('a');

	command->execute(player);

	return 0;
}