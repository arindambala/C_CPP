#include <stdio.h>

struct exercise {
    const char *description;
    float duration;
};

struct meal {
    const char *ingredients;
    float weight;
};

struct preferences {
    struct meal food;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void label(struct fish fih);

int main()
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4, {{"meat", 7.5}, {"swim in the jacuzzi", 0.2}}};
    label(snappy);

    return 0;
}

/* Print the label for the tank */
void label(struct fish fih)
{
    printf("\nName - %s\nSpecies - %s\n%i years old, %i teeth!\n", fih.name, fih.species, fih.teeth, fih.age);

    printf("Feed with %2.2f lbs of %s & allow to %s for %2.2f hours!\n",
        fih.care.food.weight, fih.care.food.ingredients,
        fih.care.exercise.description, fih.care.exercise.duration);
}