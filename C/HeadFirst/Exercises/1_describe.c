// Try to guess what each of these code fragments do

#include <stdio.h>

int main()
{
    // Describe what you think the code does

    int card_count = 11;
    if (card_count > 10)
        puts("The deck is hot. Increase bet!");
    
    /*
    
    Create an integer variable and set it to 11.
    Is the count more than 10?
    If so, display a message on the command prompt.

    */

    int c = 10;
    while (c > 0) {
        puts("I must not write code in class.");
        c = c - 1;
    }

    /*
    
    Create an integer varible and set it to 10.
    As long as the vaqlue is positive -
    Display a message -
    And decrease the count.
    This is the end of the code that should be repeated.
    
    */

    /* Assume name shorter than 20 chars. */
    char ex[20];
    puts("Enter boyfriend's name: ");
    scanf("%19s", ex);
    printf("Dear %s.\n\n\tYou're history.\n", ex);

    /*
    
    This is a comment.
    Create an array of 20 characters.
    Display a message on the screen.
    Store what the user enters into the array.
    Display a message including the text entered.
    
    */

    return 0;
}