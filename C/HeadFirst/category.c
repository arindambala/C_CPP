/*

* Program to store & produce data to different files - Head First C.
* This code is from the book mentioned above - Page 140.
* Display it - JSON format.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char line[80];
    FILE *in = fopen("spooky.csv", "r");

    FILE *file1 = fopen("ufos.csv", "w");
    FILE *file2 = fopen("disappearances.csv", "w");
    FILE *file3 = fopen("others.csv", "w");

    return 0;
}