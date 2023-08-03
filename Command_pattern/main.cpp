#include <iostream>
#include "Command.h"
#include "InputHandler.h"
#include "Warrior.h"
#include "Mage.h"

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
        std::cout << "공격키 : a 점프키 : j" << endl;
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