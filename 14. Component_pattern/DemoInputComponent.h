#pragma once

#include "InputComponent.h"

class GameObject;

class DemoInputComponent : public InputComponent {
public:
    virtual void update(GameObject& obj) {
        // AI가 알아서 Bjorn을 조정한다...
        std::cout << "DemoInputComponent 'update' Call..." << std::endl;
    }
};