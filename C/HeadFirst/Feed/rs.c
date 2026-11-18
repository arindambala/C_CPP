#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    char *feeds[] = {};

    int times = 3;
    char *phrase = argv[1];
    int i;

    for (i = 0; i < times; i++)
    {
        char var[255];
        sprintf(var, "RS_FEED=%s", feeds[i]);
        char *vars[] = {var, NULL};
    }

    return 0;
}