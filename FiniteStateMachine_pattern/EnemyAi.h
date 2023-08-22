#pragma once

class EnemyAi 
{
private:
    enum class State { Patrol,Stand, Move, Attack };
    State enemyState;
public:
    EnemyAi();

    void Update();
};
