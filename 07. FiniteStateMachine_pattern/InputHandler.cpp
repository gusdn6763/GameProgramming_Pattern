#include "InputHandler.h"

InputHandler::InputHandler()
{
    json j;
    ifstream readFile("Keyboard.json");

    if (readFile.is_open())
    {
        j = json::parse(readFile);
        keyToCommandMap[make_pair("Attack", j["Attack"].get<char>())] = std::make_unique<AttackCommand>();
        keyToCommandMap[make_pair("Jump", j["Jump"].get<char>())] = std::make_unique<JumpCommand>();
    }
    else
    {
        ofstream writeFile("Keyboard.json");

        keyToCommandMap[make_pair("Attack", 'a')] = std::make_unique<AttackCommand>();
        keyToCommandMap[make_pair("Jump", 'b')] = std::make_unique<JumpCommand>();

        j = KeyToJson();
        writeFile << j.dump(4) << endl;
    }
}

Command* InputHandler::HandleInput(char key)
{
    for (const auto& entry : keyToCommandMap)
        if (entry.first.second == key)
            return entry.second.get();

    return nullptr; 
}

void InputHandler::ChangeKey(string state, char newKey)
{
    //¹ÌÁ¦ÀÛ
}

json InputHandler::KeyToJson()
{
    json j;
    for (const auto& pair : keyToCommandMap)
        j[pair.first.first] = pair.first.second;

    return j;
}