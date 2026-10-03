// Introduction to Structures

#include <stdio.h>

void catalog(const char *name, const char *species, int teeth, int age);

int main()
{
    return 0;
}

/* Print out the catalog entry */
void catalog(const char *name, const char *species, int teeth, int age)
{
    printf("\n%s is a %s with %i teeth. He is %i!\n", name, species, teeth, age);
}