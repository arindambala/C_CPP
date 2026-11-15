#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    char *my_env[] = {"FOOD=donuts", NULL};

    if (execle("./output/order.exe", "coffee", NULL, my_env) == -1) 
    {
        fprintf(stderr, "\nCan't run process 0 : %s\n", strerror(errno));
        return 1;
    }

    return 0;
}