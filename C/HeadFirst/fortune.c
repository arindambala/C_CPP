#include <stdio.h>
#include <string.h>

void fortune_cookie(char *msg);

int main()
{
    char quote[] = "Cookies are tasty!";
    fortune_cookie(quote); // Passing the string argument

    return 0;
}

void fortune_cookie(char *msg)
{
    printf("\nMessage reads: %s\n", msg);
    printf("msg occupies %i bytes!\n", sizeof(msg));
    printf("String length is %i characters.\n", strlen(msg));
}