#pragma once
#include "InputComponent.h"

class GameObject;

class PlayerInputComponent : public InputComponent {
public:
    virtual void update(GameObject& obj) {
        std::cout << "PlayerInputComponent 'update' Call..." << std::endl;
    }

private:
    static const int WALK_ACCELERATION = 1;
};