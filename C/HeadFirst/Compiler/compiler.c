// Order changed

#include <stdio.h>

float total = 0.0;
short count = 0;
short tax_percent = 6;

int main()
{
    float val;

    printf("\nItem Price: ");
    while (scanf("%f", &val) == 1)
    {
        printf("\nTotal so far: %.2f\n", add_with_tax(val));
        printf("Item Price: ");
    }

    printf("\nFinal Total: %.2f\n", total);
    printf("Total Items: %hi\n", count);

    return 0;
}