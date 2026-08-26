/* Harvard's CS50 - Intro to Computer Science */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int counter = 0;
    int i = 1;

    printf("HelloWorld!\n");

    counter = counter + 1;
    counter += 1;

    if (counter < 5)
    {
        counter++;
        printf("Variable counter is less than 5\n");
    }

    else if (counter == 5)
    {
        counter--;
        printf("Counter is equal to 5\n");
    }

    else 
    {
        printf("Not less than 5\n");
    }

    while (i <= 5) // while (true) { printf("_"); } - Infinite Loop
    {
        printf("\nHelloWorld!");
        i++;
    }

    return 0;
}