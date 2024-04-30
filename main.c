#include <stdio.h>
#include "user_greetings.h"
#include "attack.h"

int main()
{
    int playerGold = 0;
    char action;
    char nickname[20];

    userGreetings(nickname);

    printf("You have been attacked by goblin.\n");
    printf("Press (A)ttack or (R)un.\n");

    while (action != 'q' && action != 'Q')
    {
        action = getchar();

        if (action == 65 || action == 97)
            playerGold += attackGoblin();
        else if (action == 'R' || action == 'r')
        {
            printf("Run, Forest, Run!\n");
            break;
        }

        if (action == 10)
            continue; // skip \n

        printf("What's next?\n");
    }

    printf("Game ended. You've earned %d gold\n", playerGold);
    return 0;
}