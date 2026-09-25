/*

* Program to store & produce data the way a user would want it to be split up - Head First C.
* This code is from the book mentioned above - Page 144.
* Ability to pass - CLI arguments (command-line argc, argv)

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char line[80];

    if (argc != 6)
    {
        fprintf(stderr, "Error! Required arguments - 5.\n");
        return 1;
    }

    FILE *in = fopen("Categories/spooky.csv", "r");

    if (in == NULL)
    {
        perror("Error! Unable to open the csv file.");
        return 1;
    }

    FILE *file1 = fopen(argv[2], "w");
    FILE *file2 = fopen(argv[4], "w");
    FILE *file3 = fopen(argv[5], "w");

    fgets(line, sizeof(line), in);

    while (fscanf(in, "%79[^\n]\n", line) == 1)
    {
        if (strstr(line, argv[1]))
            fprintf(file1, "%s\n", line);
        else if (strstr(line, argv[3]))
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