#include <iostream>

void printHello();
class player
{
private:
    int health; // These are attributes that i will implement when the game has come a bit
    int attack;
    int speed;
    int thePlayer; // this is the player represented in the game as a 1 and everything else is a 0 which is a place
                   // where the player can move in the game map
public:
    int createPlayer(bool running);
};
