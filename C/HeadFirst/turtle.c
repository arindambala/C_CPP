#include <stdio.h>

typedef struct {
    const char *name;
    const char *species;
    int age;
} turtle;

void happy_birthday(turtle myr);

int main()
{
    return 0;
}

void happy_birthday(turtle myr)
{
    myr.age = myr.age + 1;
    printf("\nHappy Birthday %s! You are now %i years old!\n", myr.name, myr.age);
}