#include <stdio.h>

void display();

int main()
{
    island amity = {"Amity", "09:00", "17:00", NULL};
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
    island shutter = {"Shutter", "09:00", "17:00", NULL};
    
    return 0;
}

void display(island *start)
{
    island *i = start;

    for(; i != NULL; i = i -> next)
        printf("\nName - %s\nOpen : %s-%s\n", i -> name, i -> opens, i -> closes);
}