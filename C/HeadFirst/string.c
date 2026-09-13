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

    printf("\nCharacters at tracks[0][5]: %c", tracks[0][5]);
    printf("\n%c", tracks[4][6]);
    printf("\nTrack 3: %s\n", tracks[3]);

    return 0;
}