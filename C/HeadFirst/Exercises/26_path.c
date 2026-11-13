#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main()
{
    if (execl("/sbin/ipconfig", "/sbin/ipconfig", NULL) == -1)
        return 1;
    
    return 0;
}