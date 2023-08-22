#include <iostream>
#include "Spawner.h"
#include "Ghost.h"

/*
프로토타입 패턴
여러 객체의 생성과정을 추상화함으로써 복잡성을 감소 
(몬스터들을 하나의 Spawner로 객체 생성가능)
*/
int main()
{
	Monster* ghost = new Ghost(20, 10);
	Spawner* ghostSpawner = new Spawner(ghost);

	return 0;
}