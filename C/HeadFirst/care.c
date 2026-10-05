#include <stdio.h>

struct preferences {
    const char *food;
    float exercise_hours;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

int main()
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4};

    return 0;
}