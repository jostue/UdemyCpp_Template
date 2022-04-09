#include <iostream>
#include <stdlib.h>

#include "Game.h"

int main()
{
    unsigned int player_position = 0u;
    bool finished = false;

    while (!finished)
    {
        game(player_position, finished);
    }
}
