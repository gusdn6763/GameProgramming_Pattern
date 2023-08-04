#include "Player.h"
#include "Achievement.h"

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