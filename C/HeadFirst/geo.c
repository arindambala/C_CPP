/*

* Program to store data in a CSV file - Head First C.
* This code is from the book mentioned above - Page 115.
* Display it - JSON format.

*/

#include <stdio.h>

int main()
{
    float latitude;
    float longitude;
    char info[80];
    int started = 0;

    puts("data = [");

    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
    {
        if (started)
            printf(",\n");
        else
            started = 1;
        
        printf("\n{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }

    puts("\n]");

    return 0;
}