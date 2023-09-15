#pragma once
#include "GraphicsComponent.h"

class GameObject;

class BjornGraphicsComponent : public GraphicsComponent {
public:
    virtual void update(GameObject& obj, Graphics& graphics) {
        // 물리 코드...
        std::cout << "BjornGraphicsComponent 'update' Call..." << std::endl;
    }

private:
    Sprite spriteStand_;
    Sprite spriteWalkLeft_;
    Sprite spriteWalkRight_;
};