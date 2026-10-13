#include <stdio.h>

typedef enum {
    wt,
    cnt
} choice;

/*

typedef union {
    float weight;
    int count;
} cupcake;

*/

typedef struct {
    choice type;
    union {
        float weight;
        int count;
    };
} cupcake;

int main()
{
    // cupcake order = {2};
    // printf("\nCupcakes Quantity - %i\n", order.count);

    cupcake order;
    order.type = cnt;
    order.count = 2;

    if (order.type == cnt)
        printf("\nCupcakes Quantity - %i\n", order.count);
    else
        printf("\nCupcakes Weight - %.2f\n", order.weight);

    return 0;
}