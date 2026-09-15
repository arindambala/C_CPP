// The jukebox program needs a function to read the input

#include <stdio.h>
#include <string.h>

int main()
{
    // Play what the compiler would need

    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 80, stdin);
    find_track();

    /* find_track() is being called without passing the search term. */

    char search_for[80];
    printf("Search for: ");
    fgets(search_for, 79, stdin);
    find_track(search_for);

    /* This version isn't using the full length of the array. The coder has subtracted one from the length, like one would with scanf(). */

    return 0;
}