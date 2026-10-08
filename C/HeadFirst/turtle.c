#include <stdio.h>

typedef struct {
    const char *name;
    const char *species;
    int age;
} turtle;

void happy_birthday(turtle myr);

int main()
{
    turtle myrtle = {"Myrtle", "Leatherback Sea Turtle", 99};

    happy_birthday(myrtle);
    printf("\nThe %s - %s's age is now %i!\n", myrtle.species, myrtle.name, myrtle.age);

    return 0;
}

void happy_birthday(turtle myr)
{
    myr.age = myr.age + 1;
    printf("\nHappy Birthday %s! You are now %i years old!\n", myr.name, myr.age);
}