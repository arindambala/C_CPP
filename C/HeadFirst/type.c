#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("\nThe value of INT_MAX is %i\n", INT_MAX);
    printf("The value of INT_MIN is %i\n", INT_MIN);
    printf("An int takes %i bytes\n", (int)(sizeof(int)));

    return 0;
}