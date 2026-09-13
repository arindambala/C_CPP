// Desperately seeking Frank

#include <stdio.h>
#include <string.h>

int main()
{
    char tracks[][80] = {
        "I left my heart in Harvard Med School",
        "Newark, Newark - a wonderful town",
        "Dancing with a Dork",
        "From here to maternity",
        "The girl from Iwo Jiwa",
    };

    int total_lines = sizeof(tracks) / sizeof(tracks[0]);
    printf("\nTotal Lines: %d", total_lines);

    return 0;
}