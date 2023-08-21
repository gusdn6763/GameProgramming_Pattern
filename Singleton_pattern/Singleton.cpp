#include "Singleton.h"

Singleton Singleton::instance; // 정적 멤버 변수의 정의

Singleton& Singleton::getInstance()
{
    return instance;
}