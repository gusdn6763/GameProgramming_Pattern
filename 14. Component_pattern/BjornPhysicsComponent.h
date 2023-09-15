#pragma once
#include "PhysicsComponent.h"

class GameObject;

class BjornPhysicsComponent : public PhysicsComponent {
public:
    virtual void update(GameObject& obj, World& world) {
        // 물리 코드...
        std::cout << "BjornPhysicsComponent 'update' Call..." << std::endl;
    }

private:
    Volume volume_;
};