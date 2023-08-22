#include <iostream>
#include <vector>
#include "Ghost.h"
#include "Goblin.h"

/*
업데이트 메서드 패턴
* 각 개체마다 독립적일때 효율적
* 시간의 흐름에 따른 시뮬레이션일때 효율적
*/

//추가해야할 리스트
//비활성화 객체에 대한 기능
//컬렉션 삭제시 Update 부분에 대한 객체 목록 변경
int main()
{
	Enemy* goblin1 = new Goblin(10);
	Enemy* ghost1 = new Ghost(10);

	std::vector<Enemy*> stateList;

	stateList.push_back(goblin1);
	stateList.push_back(ghost1);

	for (int i = 0; i < stateList.size(); i++)
	{
		stateList[i]->Update();
	}

	return 0;
}