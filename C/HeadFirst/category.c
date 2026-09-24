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
    FILE *in = fopen("Category/spooky.csv", "r");

    if (in == NULL)
    {
        perror("Error! Unable to open the csv file.");
        return 1;
    }

    FILE *file1 = fopen("Category/ufos.csv", "w");
    FILE *file2 = fopen("Category/disappearances.csv", "w");
    FILE *file3 = fopen("Category/others.csv", "w");

    fgets(line, sizeof(line), in);

    while (fscanf(in, "%79[^\n]\n", line) == 1)
    {
        if (strstr(line, "UFO"))
            fprintf(file1, "%s\n", line);
        else if (strstr(line, "Disappearance"))
            fprintf(file2, "%s\n", line);
        else
            fprintf(file3, "%s\n", line);
    }

    fclose(in);
    fclose(file1);
    fclose(file2);
    fclose(file3);

    return 0;
}