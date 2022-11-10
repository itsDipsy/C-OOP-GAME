#include "headers/player.hpp"

void printHello()
{
    std::cout << "Hello World!" << std::endl;
}

class player
{
private:
    int health = 10; // These are attributes that i will implement when the game has come a bit
    int attack = 2;
    int speed = 2;
    int thePlayer = 1; // this is the player represented in the game as a 1 and everything else is a 0 which is a place
                       // where the player can move in the game map
public:
    int createPlayer(bool running)
    {
        if (running == true)
        {
            return thePlayer;
        }
    }
};
