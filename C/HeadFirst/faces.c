/*

* Program to evaluate the face values of the cards - Head First C.
* This code is from the book mentioned above - Page 7.
* (c) 2014, The College Blackjack Team / Vegas Public License.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    puts("\nEnter the card name: ");
    scanf("%2s", card_name);
    
    int val = 0;

    if (card_name[0] == 'K') {
        val = 10;
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name); // Converts - Text into a Number
    }
    printf("The card value is: %i\n", val);

    return 0;
}