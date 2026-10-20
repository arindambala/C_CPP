#include <stdio.h>
#include <stdlib.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island* create(char *name);
void display(island *start);

int main()
{
    char name[80];

    fgets(name, 80, stdin);
    island *p_island0 = create(name);

    fgets(name, 80, stdin);
    island *p_island1 = create(name);

    p_island0 -> next = p_island1;

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