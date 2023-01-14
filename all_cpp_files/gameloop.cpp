#include "../headers/gameloop.hpp"
#include <iostream>
void the_game_loop(int player, int gamemap[4][10]){
    bool the_game_running_value = true;
    while (the_game_running_value)
    {
        for(int i = 0; i < 4; i++){
            std::cout << *(gamemap[i]) << std::endl;
            if(i == 4){
                the_game_running_value = false;
            }
        }
    }
}