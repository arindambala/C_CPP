// Anyone for three-card monte?

#include <stdio.h>

int main()
{
    // char *cards = "JQK"; /* String literals can never be updated */
    char cards[] = "JQK";
    char a_card = cards[2];

    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;

    // Found the Q?
    printf("\n");
    puts(cards);

    return 0;
}