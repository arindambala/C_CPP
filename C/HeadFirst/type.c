#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("\nThe value of INT_MAX is %i\n", INT_MAX);
    printf("The value of INT_MIN is %i\n", INT_MIN);
    printf("An int takes %i bytes\n", (int)(sizeof(int)));

    printf("\nThe value of FLT_MAX is %f\n", FLT_MAX);
    printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
    printf("An float takes %f bytes\n", (float)(sizeof(float)));

    return 0;
}