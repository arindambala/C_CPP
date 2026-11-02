#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

enum drink { MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE };

double price(enum drink glass);
double total(int args, ...);

int main()
{
    printf("\nTotal Price : (MONKEY GLAND + MUDSLIDE) - $%.2f", total(2, MONKEY_GLAND, MUDSLIDE));
    printf("\nTotal Price : (MONKEY GLAND + MUDSLIDE + FUZZY NAVEL) - $%.2f", total(3, MONKEY_GLAND, MUDSLIDE, FUZZY_NAVEL));
    printf("\nTotal Price : (ZOMBIE) - $%.2f\n", total(1, ZOMBIE));

    return 0;
}

double price(enum drink glass)
{
    switch (glass) 
    {
        case MUDSLIDE:
            return 6.79;
        case FUZZY_NAVEL:
            return 5.31;
        case MONKEY_GLAND:
            return 4.82;
        case ZOMBIE:
            return 5.89;
    }

    return 0;
}

double total(int args, ...)
{
    double total = 0;
    int i;

    va_list ap;
    va_start(ap, args);

    for (i = 0; i < args; i++)
    {
        enum drink glass = va_arg(ap, enum drink);
        total += price(glass);
    }

    va_end(ap);

    return total;
}