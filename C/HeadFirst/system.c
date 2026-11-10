#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char* now()
{
    time_t t;
    time (&t);
    char *time_str = asctime(localtime (&t));

    size_t len = strlen(time_str);
    if (len > 0 && time_str[len - 1] == '\n')
        time_str[len - 1] = '\0';

    return time_str;
}

int main()
{
    char comment[80];
    char cmd[120];

    if (fgets(comment, sizeof(comment), stdin) != NULL)
        comment[strcspn(comment, "\n")] = 0;

    sprintf( cmd, 
        "echo '%s %s' >> Reports/reports.log",
    comment, now());

    system(cmd);

    return 0;
}