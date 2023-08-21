/*
어떠한 기기라도 일정한 속도로 실행될 수 있는것이 중요
*/

#include <iostream>
#include <chrono>
#include <thread>

#define FRAME 60

void UpdateGame(float deltaTime)
{
    int tmp = rand() % 30000 * 700;
    for (int i = 0; i < tmp; i++)
    {

    }
}

void RenderGame()
{
    std::cout << "Rendering the game..." << std::endl;
}

int main()
{
    const double targetFrameTime = 1.0 / FRAME;

    double previousTime = std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::high_resolution_clock::now().time_since_epoch()).count();
    double accumulatedTime = 0.0;

    while (true) 
    {
        double currentTime = std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::high_resolution_clock::now().time_since_epoch()).count();
        double deltaTime = currentTime - previousTime;
        previousTime = currentTime;

        accumulatedTime += deltaTime;

        //60 프레임 만큼 게임을 업데이트중
        while (accumulatedTime >= targetFrameTime)
        {
            UpdateGame(targetFrameTime);
            accumulatedTime -= targetFrameTime;
        }

        RenderGame();

        // 초당 타겟 FPS에 맞게 슬립
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    return 0;
}