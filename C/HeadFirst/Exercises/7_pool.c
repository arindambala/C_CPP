// Written code has fallen in the pool

#include <stdio.h>
#include <string.h>

char tracks[][80] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jiwa",
    };

void find_track(char search_for[]);

int main()
{
    find_track("Dork");
    find_track("Iwo Jiwa");

    return 0;
}

void find_track(char search_for[])
{
    int i;

    for (i = 0; i < 5; i++)
    {
        if (strstr(tracks[i], search_for))
            printf("\nTrack %i : %s\n", i + 1, tracks[i]);
    }
}