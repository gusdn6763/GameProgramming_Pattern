#include "Player.h"

Player::Player()
{
    nGold = 0;
    nHealth = 10;
}

void Player::SetGold(int newGold)
{
    nGold = newGold;
    Notify("Gold", nGold); // 상태 변화를 알림
}

void Player::SetHealth(int newHealth)
{
    nHealth = newHealth;
    Notify("Health", nHealth); // 상태 변화를 알림
}