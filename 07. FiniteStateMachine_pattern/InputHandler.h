#pragma once

#include <map>
#include <memory>
#include <fstream>

#include "Command.h"
#include "json_define.h"

class InputHandler
{
private:
    map<pair<string, char>, std::unique_ptr<Command>> keyToCommandMap;

public:
    InputHandler();

    Command* HandleInput(char key);
    void ChangeKey(string state, char newKey);
    json KeyToJson();
};