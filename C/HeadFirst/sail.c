/*

* Program to track the location of players using latitudes & longitudes - Head First C.
* This code is from the book mentioned above - Page 5.
* If a player wants to travel southeast; Latitude ↑ Longitude ↓.

*/

#include <stdio.h>

void go_south_east(int lat, int lon);

int main()
{
    int latitude = 32;
    int longitude = -64;
    
    return 0;
}

void go_south_east(int lat, int lon)
{
    lat = lat + 1;
    lon = lon - 1;
}