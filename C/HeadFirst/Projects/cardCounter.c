/*

* Program to demonstrate a card counting game like Blackjack - Head First C.
* This code is from the book mentioned above - Page 37.
* (c) 2026, Arindam Bala.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int cnt = 0;


    while (card_name[0] != 'X')
    {
        puts("\nEnter the card name: ");
        scanf("%2s", card_name);

    }

    return 0;
}