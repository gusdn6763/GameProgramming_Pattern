#pragma once

#include "InputComponent.h"

class GameObject;

class DemoInputComponent : public InputComponent {
public:
    virtual void update(GameObject& obj) {
        // AI�� �˾Ƽ� Bjorn�� �����Ѵ�...
        std::cout << "DemoInputComponent 'update' Call..." << std::endl;
    }
};