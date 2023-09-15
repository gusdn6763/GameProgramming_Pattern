#pragma once

#include <iostream>

class Sprite {};
class Graphics {
public:
    void draw(Sprite& sprite, int x, int y) {
        std::cout <<
            "draw(" << x << ", " << y << ")"
            << std::endl;
    }
};


class GameObject;

class GraphicsComponent {
public:
    virtual ~GraphicsComponent() {}
    virtual void update(GameObject& obj, Graphics& graphics) = 0;
};