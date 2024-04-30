#include <stdio.h>
#include <string.h>

int main()
{
    int playerGold = 0;
    int goldPerGoblin = 15;
    int lastChar;
    int goblinHp;
    char action;
    char nickname[14];
    char c;

    printf("What is your name?\n");
    fgets(nickname, sizeof(nickname), stdin);

    lastChar = strlen(nickname) - 1;
    if (nickname[lastChar] == '\n')
        nickname[lastChar] = '\0'; // clear \n
    else
        while ((c = getchar()) != '\n' && c != EOF)
            ; // clean buffer

    printf("Hi, %s!\n", nickname);
    printf("You have been attacked by goblin.\n");
    printf("Press (A)ttack or (R)un.\n");

    while (action != 'q' && action != 'Q')
    {
        action = getchar();

        if (action == 65 || action == 97)
        {
            for (goblinHp = 3; goblinHp > 0;)
            {
                goblinHp--;

                if (goblinHp == 0)
                {
                    printf("You killed goblin and picked up %d gold.\n", goldPerGoblin);
                    playerGold += goldPerGoblin;
                }
                else
                    printf("Attack goblin! Goblin HP: %d\n", goblinHp);
            }
        }
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