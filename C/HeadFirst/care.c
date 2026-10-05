#include <stdio.h>

/* Create structs from other structs */

struct preferences {
    const char *food;
    float exercise_hours;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care; // Nesting
};

void catalog(struct fish snappy);

int main()
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4, {"meat", 7.5}};

    catalog(snappy);

    printf("Snappy likes to eat %s.\n", snappy.care.food);
    printf("Snappy also exercises for %.2f hours.\n", snappy.care.exercise_hours);

    return 0;
}

/* Print out the catalog entry */
void catalog(struct fish snappy)
{
    printf("\n%s is a %s with %i teeth. He is %i!\n", snappy.name, snappy.species, snappy.teeth, snappy.age);
}