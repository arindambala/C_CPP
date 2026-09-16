/*

* Program to search for a particular text from a group of strings - Head First C.
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
    char search_for[80];

    printf("\nSearch for: ");
    fgets(search_for, 80, stdin);

    search_for[strcspn(search_for, "\n")] = '\0';
    find_track(search_for);

    return 0;
}

void find_track(char search_for[])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (strstr(tracks[i], search_for))
            printf("\nTrack %i: %s\n", i + 1, tracks[i]);
    }
}