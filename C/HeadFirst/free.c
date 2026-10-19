#include <stdio.h>
#include <stdlib.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island* create(char *name);

int main()
{
    char name[80];

    fgets(name, 80, stdin);
    island *p_island0 = create(name);

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