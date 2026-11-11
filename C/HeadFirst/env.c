#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
        printf("\nDiners - %s\n", argv[1]);
    printf("Juice - %s\n", getenv("JUICE"));

    return 0;
}