#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_ptr = fopen("example.txt", "w");

    fprintf(file_ptr, "John Doe, Sales\nJane Doe, Marketing\nJack, Accounting\nJill, Receptionist");

    fclose(file_ptr);

    return 0;
}