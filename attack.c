#include <stdio.h>
#include "attack.h"

int attackGoblin()
{
    int goldPerGoblin = 15;

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