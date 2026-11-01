#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum response_type { DUMP, SECOND_CHANCE, MARRIAGE };
typedef struct {
    char *name;
    enum response_type type;
} response;

void dump(response res);
void second_chance(response res);
void marriage(response res);

int main()
{
    int i;
    response res[] = {
        {"Mike", DUMP}, {"Luis", SECOND_CHANCE}, 
        {"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
    };

    return 0;
}