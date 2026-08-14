#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] = "John Doe";
    int characterAge = 35;

    printf("   /|\n");
    printf("  / |\n");
    printf(" /  |\n");
    printf("/___|\n");

    printf("\n");

    printf("There once was a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("He really liked the name %s,\n", characterName);
    printf("but did not like being %d.\n", characterAge);

    return 0;
}