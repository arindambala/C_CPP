#include <stdio.h>

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

int main()
{
    return 0;
}