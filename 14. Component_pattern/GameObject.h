#pragma once
#include "InputComponent.h"
#include "PhysicsComponent.h"
#include "GraphicsComponent.h"

class GameObject {
public:
    int velocity;
    int x, y;


    GameObject(InputComponent* input,
        PhysicsComponent* physics,
        GraphicsComponent* graphics)
        : input_(input),
        physics_(physics),
        graphics_(graphics),
        velocity(0), x(0), y(0) {}

    void update(World& world, Graphics& graphics) {
        input_->update(*this);
        physics_->update(*this, world);
        graphics_->update(*this, graphics);
    }

private:
    InputComponent* input_;
    PhysicsComponent* physics_;
    GraphicsComponent* graphics_;
};

