#include "Player.h"
#include "Achievement.h"

/*
������ ���� (c# �̺�Ʈ ��ɰ� ����)
������ �Ǵ� ��ü(player)�� ������(achievements)���� ���� ��ȭ�� �˸�
Ŀ�ø� ����
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