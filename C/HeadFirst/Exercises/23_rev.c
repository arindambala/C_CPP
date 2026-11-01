#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum response_type { DUMP, SECOND_CHANCE, MARRIAGE };
typedef struct {
    char *name;
    enum response_type type;
} response;

int main()
{
    int i;
    return 0;
}