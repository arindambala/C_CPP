#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void find();

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

void find()
{
    int i;

    puts("Search results:");
    puts("-----------------------------------------------");

    for (i = 0; i < NUM_ADS; i++)
    {
        if (strstr(ADS[i], "sports") && !strstr(ADS[i], "beiber"))
            printf("%s\n", ADS[i]);
    }

    puts("-----------------------------------------------");
}