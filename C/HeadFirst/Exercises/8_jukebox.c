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

    return 0;
}