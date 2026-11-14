#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *w = getenv("EXTRA");

    if (!w)
        w = getenv("FOOD");
    if (!w)
        w = argv[argc - 1];

    return 0;
}