#include "GameObject.h"
#include "PlayerInputComponent.h"
#include "DemoInputComponent.h"
#include "BjornPhysicsComponent.h"
#include "BjornGraphicsComponent.h"

/*
* 디커플링을 위한 주요 패턴중 하나
* 각각의 기능들을 독립적인 객체 조립형태로 만든다.
* 
* 장점 : 디커플링, 재사용성
* 단점 : 독립적인 컴포넌트간의 연결이 많이 필요할경우 더 복잡할 수 있음.
* 
*/
#define MODE_DEMO 0


GameObject* createBjorn() {
#if MODE_DEMO == 0
    return new GameObject(
        new PlayerInputComponent(),
        new BjornPhysicsComponent(),
        new BjornGraphicsComponent());
#else
    return new GameObject(
        new DemoInputComponent(),
        new BjornPhysicsComponent(),
        new BjornGraphicsComponent());
#endif
}


int main(void)
{
    World world;
    Graphics graphics;
    GameObject* bjorn = createBjorn();
    bjorn->update(world, graphics);

    if (bjorn != nullptr) {
        delete bjorn;
        bjorn = nullptr;
    }

    return 0;
}
