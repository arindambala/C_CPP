#include <stdio.h>
#include <hfcal.h>

void display_calories(float weight, float distance, float coeff)
{
    printf("\nWeight - %3.2f lbs\n", weight);
    printf("Distance - %3.2f miles\n", distance);
    printf("Calories burned - %4.2f cal\n", coeff);
}