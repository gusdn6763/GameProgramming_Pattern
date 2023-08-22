#include <iostream>
#include <windows.h>
#include "Command.h"
#include "InputHandler.h"
#include "Warrior.h"
#include "Mage.h"

/*
명령패턴
명령을 객체화 함으로써 유연성과 확장성을 높임.

*/
int main()
{
    int nSelect = 0;
    Playable* player;
    InputHandler* input = new InputHandler();

    cout << "플레이어 선택 : 1번 = 워리어 2번 = 마법사" << endl;

    std::cin >> nSelect;

    if (nSelect == 1)
        player = new Warrior();
    else if (nSelect == 2)
        player = new Mage();
    else
        return 0;

    while (true)
    {
        printf("공격키 : %c 점프키 : %c 이동키 : 화살표", input->FindKey(new AttackCommand()), input->FindKey(new JumpCommand()));
        system("cls");
        char key;
        std::cin >> key;
        //input->ChangeKey('a', 'j');
        //input->ChangeKey('a', 'd');
        Command* command = input->HandleInput(key);
        if (command)
            command->execute(*player);
    }

    delete input;
    delete player; // player 객체 메모리 해제
    return 0;
}