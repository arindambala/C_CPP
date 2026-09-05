#include <stdio.h>

int y = 1; // Global

int main()
{
    int x = 4; // Stack
    printf("x is stored at %p\n", &x);

    return 0;
}