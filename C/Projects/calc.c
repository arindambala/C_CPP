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

    printf("\n%-5s - %.2f & %.2f (+) : %.2f", "SUM", numOne, numTwo, numOne + numTwo);
    printf("\n%-5s - %.2f & %.2f (-) : %.2f", "DIFF", numOne, numTwo, numTwo - numOne);
    printf("\n%-5s - %.2f & %.2f (*) : %.2f", "PROD", numOne, numTwo, numOne * numTwo);
    printf("\n%-5s - %.2f & %.2f (/) : %.2f", "DIV", numOne, numTwo, numTwo / numOne);

    return 0;
}