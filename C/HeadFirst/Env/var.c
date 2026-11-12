#include <stdio.h>
#include <unistd.h>

int main()
{
    char *my_env[] = {"JUICE=Peach & Apple", NULL};
    execle("./output/env.exe", "diner_info", "4", NULL, my_env);

    perror("Failed!");
    return 1;
}