// Introduction to Structures

#include <stdio.h>

void catalog(const char *name, const char *species, int teeth, int age);
void label(const char *name, const char *species, int teeth, int age);

int main()
{
    catalog("Snappy", "Piranha", 69, 4);
    label("Snappy", "Piranha", 69, 4);

    return 0;
}

/* Print out the catalog entry */
void catalog(const char *name, const char *species, int teeth, int age)
{
    printf("\n%s is a %s with %i teeth. He is %i!\n", name, species, teeth, age);
}

/* Print the label for the tank */
void label(const char *name, const char *species, int teeth, int age)
{
    printf("\nName: %s\nSpecies: %s\nA %i years old with %i teeth!\n", name, species, teeth, age);
}