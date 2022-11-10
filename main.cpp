#include <iostream>
#include "./headers/player.hpp"
#include "./headers/TheGameMap.hpp"
int main()
{
    bool running = true;
    player Theplayer;
    int theRealPlayer = Theplayer.createPlayer(running);
    if (running == true)
    {
        gameMap[0][0] = theRealPlayer;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << std::endl;
        for (int i = 0; i < 10; i++)
        {
            std::cout << gameMap[i][i];
        }
    }
}