#include "../headers/gameloop.hpp"
#include <iostream>
void the_game_loop(int player, int gamemap[4][10]){
    bool the_game_running_value = true;
    while (the_game_running_value)
    {
<<<<<<< Updated upstream
<<<<<<< Updated upstream
        for(int i = 0; i < 4; i++){
            std::cout << gamemap[i] << std::endl;
            if(i == 4){
                the_game_running_value = false;
=======
=======
>>>>>>> Stashed changes
        for(int i = 0; i <= 4; i++){
            for (int j = 0; j <= 10; j++)
            {
                std::cout << gamemap[i][j];
                if(i == 4){
                    the_game_running_value = false;
                }
            }
            
            std::cout << std::endl;
        }
    }
}