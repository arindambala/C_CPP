#include <stdio.h>

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
};

void catalog(struct fish fih);
void label(struct fish fih);

int main()
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4};

    catalog(snappy);
    label(snappy);

    return 0;
}

/* Print out the catalog entry */
void catalog(struct fish fih)
{
    printf("\n%s is a %s with %i teeth. He is %i!\n", fih.name, fih.species, fih.teeth, fih.age);
}

/* Print the label for the tank */
void label(struct fish fih)
{
    printf("\nName: %s\nSpecies: %s\nA %i years old with %i teeth!\n", fih.name, fih.species, fih.teeth, fih.age);
}