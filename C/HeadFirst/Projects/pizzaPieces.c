/*

* Program to implement a command-line interface using POSIX 'getopt()' & handle optional arguments - Head First C.
* This code is from the book mentioned above - Page 150.
* (c) 2026, Arindam Bala.

*/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) // argc - Number of arguments | argv - Array of argument strings
{
    char *delivery = "";
    int thick = 0;
    int count = 0;
    char ch;

    while ((ch = getopt(argc, argv, "d:t")) != EOF) // POSIX function | Parse CLI-options
    {
        switch (ch)
        {
            // d - expects an argument
            case 'd':
                delivery = optarg;
                break;
            
            // t - boolean flag
            case 't':
                thick = 1;
                break;
            
            default:
                fprintf(stderr, "Obscure option: %s\n", optarg);
                return 1;
        }
    }

    return 0;
}