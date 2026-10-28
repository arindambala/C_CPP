#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sports_no_beiber(char *s);
int sports_or_workout(char *s);
int ns_theater(char *s);
int arts_theater_or_dining(char *s);

void find(int (*match)(char*));

int main()
{
    int NUM_ADS = 7;

    char *ADS[] = {
        "William : SBM GSOH likes sports, TV, dining",
        "Matt : SWM NS likes art, movies, theater",
        "Luis : SLM ND likes books, theater, art",
        "Mike : DWM DS likes trucks, sports and beiber",
        "Peter : SAM likes chess, working out and art",
        "Josh : SJM likes sports, movies and theater",
        "Jed : DBM likes theater, books and dining"
    };

    return 0;
}

int sports_no_beiber(char *s) { return strstr(s, "sports") && !strstr(s, "beiber"); }
int sports_or_workout(char *s) { return strstr(s, "sports") || strstr(s, "working out"); }
int ns_theater(char *s) { return strstr(s, "NS") && strstr(s, "theater"); }
int arts_theater_or_dining(char *s) { return strstr(s, "arts") || strstr(s, "theater") || strstr(s, "dining"); }

void find(int (*match)(char*))
{
    int i;

    puts("\nSearch results:");
    puts("---------------------------------------------");

    for (i = 0; i < num_ads; i++)
    {
        if (strstr(ads[i], "sports") && !strstr(ads[i], "beiber"))
            printf("%s\n", ads[i]);
    }

    puts("---------------------------------------------");
}