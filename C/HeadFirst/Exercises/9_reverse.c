// Display a string backwards

#include <stdio.h>
#include <string.h>

void print_reverse(char *s);

int main()
{
    char str[] = "HelloWorld";

    printf("\nOriginal: %s", str);
    printf("\nReversed: ");
    print_reverse(str);

    return 0;
}

void print_reverse(char *s)
{
    size_t len = strlen(s);
    char *t = s + len - 1;

    while (t >= s)
    {
        printf("%c", *t);
        t = t - 1;
    }

    puts("");
}