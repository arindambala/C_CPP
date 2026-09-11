// Anyone for three-card monte?

#include <stdio.h>

int main()
{
    char *cards = "JQK";
    char a_card = cards[2];

    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];

    return 0;
}