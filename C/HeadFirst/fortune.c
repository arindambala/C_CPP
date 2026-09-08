#include <stdio.h>

void fortune_cookie(char msg[]);

int main()
{
    char quote[] = "Cookies are tasty!";
    fortune_cookie(quote);

    return 0;
}

void fortune_cookie(char msg[])
{
    printf("\nMessage reads: %s\n", msg);
}