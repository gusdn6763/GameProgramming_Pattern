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

    cout << "�÷��̾� ���� : 1�� = ������ 2�� = ������" << endl;

    std::cin >> nSelect;

    if (nSelect == 1)
        player = new Warrior();
    else if (nSelect == 2)
        player = new Mage();
    else
        return 0;

    while (true)
    {
        std::cout << "����Ű : a ����Ű : j" << endl;
        char key;
        std::cin >> key;
        //input->ChangeKey('a', 'j');
        //input->ChangeKey('a', 'd');
        Command* command = input->HandleInput(key);
        if (command)
            command->execute(*player);
    }

    delete input;
    delete player; // player ��ü �޸� ����
    return 0;
}