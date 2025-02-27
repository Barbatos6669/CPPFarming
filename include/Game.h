#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include "Player.h"
#include "Farm.h"

class Game
{
    private:
        Player player;
        Farm farm;

    public:
        Game();
        void run();
};

#endif // GAME_H
