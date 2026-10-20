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

    display(p_island0);

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

void display(island *start)
{
    island *p_island = start;

    for(; p_island != NULL; p_island = p_island -> next)
        printf("\nName - %s\nOpen : %s-%s\n", p_island -> name, p_island -> opens, p_island -> closes);
}