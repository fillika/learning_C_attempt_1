#include <stdio.h>
#include <string.h>
#include "user_greetings.h"

int userGreetings(char *nickname, int size)
{
    int lastChar;
    char c;

    printf("What is your name?\n");
    fgets(nickname, size, stdin);

    lastChar = strlen(nickname) - 1;
    if (nickname[lastChar] == '\n')
        nickname[lastChar] = '\0'; // clear \n
    else
        while ((c = getchar()) != '\n' && c != EOF)
            ; // clean buffer

    printf("Hi, %s!\n", nickname);
    return 0;
}