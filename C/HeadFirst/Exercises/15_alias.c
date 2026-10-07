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
    return 0;
}

void badge(diver dave)
{
    printf("\nName - %s\nTank - %2.2f(%i)\nSuit - %s\n",
    dave.name, dave.kit.tank_capacity, dave.kit.tank_psi, dave.kit.suit_material);
}