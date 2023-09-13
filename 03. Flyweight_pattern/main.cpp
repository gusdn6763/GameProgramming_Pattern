#include "World.h"

/*
* 경량 패턴
* 객체를 일일이 생성하지 않고 사용중인 인스턴스를 사용함으로써 
* 비용 및 메모리 사용을 절약
*/

/*
* Terrain을 열거형이 아닌 객체로 둔 이유 :
* 캡슐화 및 가독성 향상
*/

/*
* Terrain 클래스를 분할 하지 않는 이유 :
* 하나의 객체마다 인스턴스 생성은 비효율적
* 관리의 효율성
*/

void main()
{
	World* world = new World();

	return ;
}