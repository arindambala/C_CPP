#include <stdio.h>

void display();

int main()
{
    return 0;
}

void display(island *start)
{
    island *i = start;

    for(; i != NULL; i = i -> next)
        printf("\nName - %s\nOpen : %s-%s\n", i -> name, i -> opens, i -> closes);
}