/*

* Program to calculate the number of cards in the shoe - Head First C.
* This code is from the book mentioned above - Page 5.
* (c) 2014, The College Blackjack Team / Vegas Public License.

*/

#include <stdio.h>

int main()
{
    int decks;

    puts("\nEnter a number of decks -");
    scanf("%i", &decks);

    if (decks < 1)
    {
        puts("That is not a valid number of decks!");
        return 1;
    }

    printf("There are %i cards!\n", (decks * 52));

    return 0;
}