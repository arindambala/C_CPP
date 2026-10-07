#include <stdio.h>

typedef struct {
    float tank_capacity;
    int tank_psi;
    const char *suit_material;
} equipment;

typedef struct scuba {
    const char *name;
    equipment kit;
} diver;

void badge(diver dave);

int main()
{
    diver randy = {"Randy", {5.5, 3500, "Neoprene"}};
    badge(randy);

    return 0;
}

void badge(diver dave)
{
    printf("\nDiver Name - %s\nTank Capacity - %2.2f (PSI : %i)\nThe Suit is made up of %s!\n",
    dave.name, dave.kit.tank_capacity, dave.kit.tank_psi, dave.kit.suit_material);
}