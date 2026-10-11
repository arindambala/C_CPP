#include <stdio.h>

typedef union {
    float lemon;
    int lime_pieces;
} lemon_lime;

typedef struct {
    float tequila;
    float cointreau;
    lemon_lime citrus;
} margarita;

int main()
{
    margarita uno = {2.0, 1.0, {2}};
    printf("\n%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", uno.tequila, uno.cointreau, uno.citrus.lemon);

    margarita dos = {2.0, 1.0, {0.5}};
    printf("\n%2.1f measures of tequila\n%2.1f measures of cointreau\n%2.1f measures of juice\n", dos.tequila, dos.cointreau, dos.citrus.lemon);

    margarita tres = {2.0, 1.0, {.lime_pieces = 1}};
    printf("\n%2.1f measures of tequila\n%2.1f measures of cointreau\n%i pieces of lime\n", tres.tequila, tres.cointreau, tres.citrus.lime_pieces);

    return 0;
}