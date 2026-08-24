#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_ptr = fopen("example.txt", "w");
    FILE *file_ptrOne = fopen("example.txt", "a");

    fprintf(file_ptr, "John Doe, Sales\nJane Doe, Marketing\nJack, Accounting\nJill, Receptionist");
    fprintf(file_ptrOne, "\nJade, Customer Service");

    fclose(file_ptr);

    return 0;
}