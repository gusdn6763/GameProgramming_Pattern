#include "Player.h"
#include "Achievement.h"

/*
관찰자 패턴 (c# 이벤트 기능과 유사)
관찰이 되는 주체(player)가 관찰자(achievements)에게 상태 변화를 알림
커플링 방지
*/

int main() 
{
    Player player;
    Achievements achievements;

    player.AddObserver(&achievements);

    player.SetGold(800);  
    player.SetGold(1100); 
    player.SetHealth(1500);

    return 0;
}