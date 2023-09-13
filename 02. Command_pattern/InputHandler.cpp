#include "InputHandler.h"

InputHandler::InputHandler()
{
    Init();
}

void InputHandler::Init()
{
    keyToCommandMap['a'] = std::make_unique<AttackCommand>();
    keyToCommandMap['j'] = std::make_unique<JumpCommand>();
}

char InputHandler::FindKey(Command* command)
{
    for (const auto& pair : keyToCommandMap) 
        if (pair.second.get() == command) 
            return pair.first;

    return '\0';
}

Command* InputHandler::HandleInput(char key)
{
    auto it = keyToCommandMap.find(key);
    if (it != keyToCommandMap.end())
    {
        return it->second.get();
    }
    return nullptr;
}

void InputHandler::ChangeKey(char currentKey, char newKey)
{
    if (keyToCommandMap.find(currentKey) != keyToCommandMap.end() && keyToCommandMap.find(newKey) != keyToCommandMap.end())
    {
        std::swap(keyToCommandMap[currentKey], keyToCommandMap[newKey]);
    }
    else if (keyToCommandMap.find(currentKey) != keyToCommandMap.end())
    {
        auto command = std::move(keyToCommandMap[currentKey]);
        keyToCommandMap.erase(currentKey);
        keyToCommandMap[newKey] = std::move(command);
    }
}