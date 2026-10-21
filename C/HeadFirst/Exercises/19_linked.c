#include <stdio.h>
#include <stdlib.h>

typedef struct island {
    char *name;
    char *opens;
    char *closes;
    struct island *next;
} island;

island *start = NULL;
island *i = NULL;
island *next = NULL;