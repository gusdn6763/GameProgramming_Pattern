#include "Player.h"

Player::Player()
{
    nGold = 0;
    nHealth = 10;
}

void Player::SetGold(int newGold)
{
    nGold = newGold;
    Notify("Gold", nGold); // ���� ��ȭ�� �˸�
}

void Player::SetHealth(int newHealth)
{
    nHealth = newHealth;
    Notify("Health", nHealth); // ���� ��ȭ�� �˸�
}