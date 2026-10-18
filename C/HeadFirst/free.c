#include <stdio.h>
#include <stdlib.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

int main()
{
    return 0;
}

island* create(char *name)
{
    island *i = malloc(sizeof(island));

    i -> name = name;
    i -> opens = "09:00";
    i -> closes = "17:00";
    i -> next = NULL;

    return i;
}