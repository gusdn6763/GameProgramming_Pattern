#include "Singleton.h"

Singleton Singleton::instance; // ���� ��� ������ ����

Singleton& Singleton::getInstance()
{
    return instance;
}