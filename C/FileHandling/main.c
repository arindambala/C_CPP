#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_ptr = fopen("example.txt", "w");

    fprintf(file_ptr, "John Doe, Sales\nJane Doe, Marketing\nJack, Accounting\nJill, Receptionist");

    fclose(file_ptr);

    FILE *file_ptrOne = fopen("example.txt", "a");

    fprintf(file_ptrOne, "\nJade, Customer Service");

    fclose(file_ptrOne);

    char line[255];
    FILE *file_ptrTwo = fopen("example.txt", "r");

    /*
    
    fgets(line, 255, file_ptrTwo);
    printf("%s", line);
    fgets(line, 255, file_ptrTwo);
    printf("%s", line); 
    
    */

    if (file_ptrTwo == NULL) return 1;
    printf("\n");

    while (fgets(line, sizeof(line), file_ptrTwo) != NULL) { printf("%s", line); }
    printf("\n");

    fclose(file_ptrTwo);

    return 0;
}