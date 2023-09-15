#pragma once

#include<iostream>

enum class J_DIR { DIR_LEFT, DIR_RIGHT };
class Controller {
public:
    static J_DIR getJoystickDirection() {
        return J_DIR::DIR_LEFT;
    }
};


class GameObject;

class InputComponent {
public:
    virtual ~InputComponent() {}
    virtual void update(GameObject& obj) = 0;
};