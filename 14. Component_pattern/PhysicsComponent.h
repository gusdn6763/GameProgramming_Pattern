#pragma once

#include <iostream>


class Volume {};
class World {
public:
    void resolveCollision(Volume& volume, int x, int y, int velocity) {
        std::cout <<
            "resolveCollision(" << x << ", " << y << ", " << velocity << ")"
            << std::endl;
    }
};


class GameObject;

class PhysicsComponent {
public:
    virtual ~PhysicsComponent() {};
    virtual void update(GameObject& obj, World& world) = 0;
};