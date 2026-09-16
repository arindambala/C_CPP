/*

* Program to search the for a particular text from a group of strings - Head First C.
* This code is from the book mentioned above - Page 94.
* Introduces the use of the string header file.

*/

#include <stdio.h>
#include <string.h>

void find_track(char search_for[]);

char tracks[][80] = {
    "I left my heart in Harvard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jiwa",
};

int main()
{
    return 0;
}

void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (strstr(tracks[i], search_for))
            printf("\nTrack %i: %s", i + 1, tracks[i]);
    }
}