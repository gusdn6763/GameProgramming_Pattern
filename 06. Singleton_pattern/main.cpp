#include <iostream>
#include "Singleton.h"

/*
성성된 인스턴스들중에서 무조건 하나만

스태틱변수는 컴파일 시에 메모리에 할당된다.
주의할 점은 instance변수를 클래스밖에서 초기화를 해줘야한다
*/
int main()
{
	Singleton singleton = singleton.getInstance();
	return 0;
}