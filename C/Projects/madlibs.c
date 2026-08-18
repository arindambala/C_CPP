/* Mad Libs Game */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 50

void clear_input_buffer()
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
