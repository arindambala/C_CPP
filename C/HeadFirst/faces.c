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
    }

    return 0;
}