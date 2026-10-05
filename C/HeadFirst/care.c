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
    return 0;
}