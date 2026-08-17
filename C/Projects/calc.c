/* Basic Calculator */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numOne;
    double numTwo;

    printf("\nEnter the first number :\t");
    scanf("%lf", &numOne);
    printf("Enter the second number :\t");
    scanf("%lf", &numTwo);

    printf("\nSUM - %.2f & %.2f :\t%.2f", numOne, numTwo, numOne + numTwo);

    return 0;
}