#include <stdio.h>
#include <hfcal.h>

int main()
{
    display_calories(115.2, 11.3, 0.79);

    /*
    
    - gcc -I./includes -c hfcal.c -o output/hfcal.exe
    - gcc -I./includes -c burnt_cal.c -o output/burnt_cal.exe
    - ar -res ./libs/libhfcal.a hfcal.exe
    - gcc burnt_cal.exe -L./libs -lhfcal -o burnt_cal
    
    */

    return 0;
}