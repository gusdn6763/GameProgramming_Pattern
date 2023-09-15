#pragma once
#include "GraphicsComponent.h"

class GameObject;

class BjornGraphicsComponent : public GraphicsComponent {
public:
    virtual void update(GameObject& obj, Graphics& graphics) {
        // ���� �ڵ�...
        std::cout << "BjornGraphicsComponent 'update' Call..." << std::endl;
    }

private:
    Sprite spriteStand_;
    Sprite spriteWalkLeft_;
    Sprite spriteWalkRight_;
};