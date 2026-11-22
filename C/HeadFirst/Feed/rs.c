#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    char *feeds[] = {"https://feeds.bbci.co.uk/sport/football/rss.xml", "https://www.rollingstone.com/music/feed/rss.xml", "https://independent.co.uk/rss.xml"};

    int times = 3;
    char *phrase = argv[1];
    int i;

    for (i = 0; i < times; i++)
    {
        char var[255];
        sprintf(var, "RS_FEED=%s", feeds[i]);
        char *vars[] = {var, NULL};

        pid_t pid = fork();

        if (pid == -1) {
            fprintf(stderr, "\nCan't fork process - %s\n", strerror(errno));
            return 1;
        }

        if (execle("usr/bin/python3", "usr/bin/python3", "rsgossip.py", phrase, NULL, vars) == -1) {
            fprintf(stderr, "\nCan't run script - %s\n", strerror(errno));
            return 1;
        }
    }

    return 0;
}