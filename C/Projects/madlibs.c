/* Mad Libs Game */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 50

void clear_input_buffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

int main()
{
    char adjectiveOne[MAX_STR_LEN];
    char noun[MAX_STR_LEN];
    char verb[MAX_STR_LEN];
    char place[MAX_STR_LEN];
    char animal[MAX_STR_LEN];
    char adjectiveTwo[MAX_STR_LEN];
    char exclamation[MAX_STR_LEN];
    char food[MAX_STR_LEN];

    printf("=========================================\n");
    printf("         WELCOME TO MAD LIBS!          \n");
    printf("=========================================\n");
    printf("Please provide the following words to create a story -> \n\n");
}