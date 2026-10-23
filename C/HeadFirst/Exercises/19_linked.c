#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island* create(char *name);
void display(island *start);
void release(island *start);

int main()
{
    island *start = NULL;
    island *i = NULL;
    island *next = NULL;
    char name[80];

    for (; fgets(name, 80, stdin) != NULL; i = next)
    {
        name[strcspn(name, "\r\n")] = 0; // Removes the trailing newline
        next = create(name);
        if (start == NULL)
            start = next;
        if (i != NULL)
            i -> next = next;
    }

    display(start);
    release(start);

    return 0;
}

island* create(char *name)
{
    island *i = malloc(sizeof(island));

    i -> name = strdup(name);
    i -> opens = "09:00";
    i -> closes = "17:00";
    i -> next = NULL;

    return i;
}

void display(island *start)
{
    island *i = start;

    for(; i != NULL; i = i -> next)
        printf("\nName - %s\nOpen : %s-%s\n", i -> name, i -> opens, i -> closes);
}

void release(island *start)
{
    island *i = start;
    island *next = NULL;

    for(; i != NULL; i = next)
    {
        next = i -> next;
        free(i -> name);
        free(i);
    }
}