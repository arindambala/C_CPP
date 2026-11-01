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

    for (i = 0; i < 4; i++)
    {
        switch (res[i].type)
        {
            case DUMP:
                dump(res[i]);
                break;
            case SECOND_CHANCE:
                second_chance(res[i]);
                break;
            default:
                marriage(res[i]);
        }
    }

    return 0;
}

void dump(response res)
{
    printf("\nDear %s,\n", res.name);
    puts("Unfortunately your last date contacted us to");
    puts("say that they will not be seeing you again. :P ");
}

void second_chance(response res)
{
    printf("\nDear %s,\n", res.name);
    puts("Good news, your last date has asked us to");
    puts("arrange another meeting. Please call ASAP! :) ");
}

void marriage(response res)
{
    printf("\nDear %s,\n", res.name);
    puts("Congratulations! Your last date has contacted");
    puts("us with a proposal of marriage! ;) ");
}