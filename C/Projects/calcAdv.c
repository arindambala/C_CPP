/* Advanced Calculator */

#include <stdio.h>
#include <stdlib.h>

double addition(double numOne, double numTwo);
double subtraction(double numOne, double numTwo);
double multiplication(double numOne, double numTwo);

double division(double numOne, double numTwo)
{
    double res;
    res = numOne / numTwo;
    return res;
}

int main()
{
    double numOne, numTwo;
    char op;
    double result;

    printf("\nEnter the first number :\t");
    scanf("%lf", &numOne);
    printf("\nEnter the second number :\t");
    scanf("%lf", &numTwo);

    printf("\nThe required operation (+ - * /) :\t");
    scanf(" %c", &op);

    if (op == '+')
    {
        result = addition(numOne, numTwo);
        printf("\n\n%-5s - %.2f & %.2f (+) : %.2f\n", "Result", numOne, numTwo, result);
    }

    else if (op == '-')
    {
        result = subtraction(numOne, numTwo);
        if (numOne >= numTwo)
        {
            printf("\n\n%-5s - %.2f & %.2f (-) : %.2f\n", "Result", numOne, numTwo, result);
        }
    }

    else if (op == '*')
    {
        result = multiplication(numOne, numTwo);
        printf("\n\n%-5s - %.2f & %.2f (*) : %.2f\n", "Result", numOne, numTwo, result);
    }

    else if (op == '/')
    {
        if (numTwo == 0)
        {
            printf("\n\nERROR! Division by zero is not allowed! Please retry.\n");
        }

        else 
        {
            result = division(numOne, numTwo);
            printf("\n\n%-5s - %.2f & %.2f (/) : %.2f\n", "Result", numOne, numTwo, result);
        }
    }

    else
    {
        printf("\n\nERROR! Invalid operator! Please retry.\n");
    }
}

double addition(double numOne, double numTwo)
{
    return numOne + numTwo;
}

double subtraction(double numOne, double numTwo)
{
    if (!(numOne >= numTwo))
    {
        printf("\n\nNegative difference prohibited!\n");
        return 0.0;
    }

    else
    {
        return numOne - numTwo;
    }
}

double multiplication(double numOne, double numTwo)
{
    double res;

    if (numOne == 0 || numTwo == 0)
    {
        return 0;
    }

    else
    {
        res = numOne * numTwo;
    }

    return res;
}