#include <stdio.h>

int main()
{
    int goldPerGoblin = 15;
    int goblinHp = 3;
    char ch;

    printf("You have been attacked by goblin.\n");
    printf("Press (A)ttack or (R)un.\n");
    ch = getchar();

    while (ch != 'q' && ch != 'Q')
    {
        printf("You pressed %c.\n", ch);
        if (ch == 65 || ch == 97)
        {
            goblinHp--;
            printf("Attack goblin! Goblin HP: %d\n", goblinHp);
        }
        else if (ch == 'R' || ch == 'r')
        {
            printf("Run, Forest, Run!\n");
            break;
        }

        if (goblinHp < 1)
        {
            printf("You killed goblin.\n");
            printf("You picked up %d gold.\n", goldPerGoblin);
            break;
        }

        printf("Loop ended\n");
        getchar(); // clean buffer
        ch = getchar();
    }

    printf("Game ended\n");
    return 0;
}