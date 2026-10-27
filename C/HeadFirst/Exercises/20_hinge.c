#include <stdio.h>

int sports_no_beiber(char *s);
int sports_or_workout(char *s);

int main()
{
    return 0;
}

int sports_no_beiber(char *s) { return strstr(s, "sports") && !strstr(s, "beiber"); }
int sports_or_workout(char *s) { return strstr(s, "sports") || strstr(s, "working out"); }