#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sports_no_beiber(char *s);
int sports_or_workout(char *s);
int ns_theater(char *s);
int arts_theater_or_dining(char *s);

int main()
{
    return 0;
}

int sports_no_beiber(char *s) { return strstr(s, "sports") && !strstr(s, "beiber"); }
int sports_or_workout(char *s) { return strstr(s, "sports") || strstr(s, "working out"); }
int ns_theater(char *s) { return strstr(s, "NS") && strstr(s, "theater"); }
int arts_theater_or_dining(char *s) { return strstr(s, "arts") || strstr(s, "theater") || strstr(s, "dining"); }