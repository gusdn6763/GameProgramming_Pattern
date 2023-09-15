#include "GameObject.h"
#include "PlayerInputComponent.h"
#include "DemoInputComponent.h"
#include "BjornPhysicsComponent.h"
#include "BjornGraphicsComponent.h"

/*
* ��Ŀ�ø��� ���� �ֿ� ������ �ϳ�
* ������ ��ɵ��� �������� ��ü �������·� �����.
* 
* ���� : ��Ŀ�ø�, ���뼺
* ���� : �������� ������Ʈ���� ������ ���� �ʿ��Ұ�� �� ������ �� ����.
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
