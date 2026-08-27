/* Harvard's CS50 - Intro to Computer Science */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int counter = 0;
    int i = 1;
    char answer[50];
    char name[50];

    int integer;
    float floatingPoint;

    int x, y;

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

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nHelloWorld!");
    }

    printf("\n\nWhat's your name? :\t");
    scanf("%49s", answer);
    while (getchar() != '\n');
    printf("\nHello, %s", answer);

    printf("\n\nWhat's your name? :\t");
    fgets(name, sizeof(name), stdin);
    printf("\nHello, %s", name);

    printf("\nInteger : ");
    scanf("%i", &integer);
    printf("\nHello, %i", integer);

    printf("\n\nFloat : ");
    scanf("%f", &floatingPoint);
    printf("\nHello, %f", floatingPoint);

    printf("\n\nx : ");
    scanf("%i", &x);
    printf("y : ");
    scanf("%i", &y);

    // Arithmetic
    printf("\nx + y = %i\n", x + y);
    printf("x - y = %i\n", x - y);
    printf("x * y = %i\n", x * y);
    printf("x / y = %i\n", x / y);
    printf("x mod y = %i\n", x % y);

    return 0;
}