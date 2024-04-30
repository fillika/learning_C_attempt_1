#include <stdio.h>
#include <string.h>

int userGreetings(char *nickname)
{
    int lastChar;
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
    return 0;
}