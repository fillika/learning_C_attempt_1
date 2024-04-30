#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "attack.h"

int attackGoblin()
{
    int goldPerGoblin;
    srand(time(NULL)); // creater seed

    goldPerGoblin = rand() % 29; // from 0 to 28 random gold

    for (int goblinHp = 3; goblinHp > 0;)
    {
        goblinHp--;

        if (goblinHp == 0)
            printf("You killed goblin and picked up %d gold.\n", goldPerGoblin);
        else
            printf("Attack goblin! Goblin HP: %d\n", goblinHp);
    }

    return goldPerGoblin;
}