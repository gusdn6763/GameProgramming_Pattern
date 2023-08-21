#pragma once
#include <map>
#include <memory>
#include "Command.h"

class InputHandler
{
private:
    std::map<char, std::unique_ptr<Command>> keyToCommandMap;

public:
    InputHandler();

    void Init();
    Command* HandleInput(char key);
    char FindKey(Command* command);
    void ChangeKey(char currentKey, char newKey);
};