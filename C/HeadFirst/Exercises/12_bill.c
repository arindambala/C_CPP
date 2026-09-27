// Help the waiters bus tables at the diner

#include <stdio.h>

float total = 0.0;
short count = 0;
short tax_percent = 6;

float add_with_tax(float f);

int main()
{
    return 0;
}

float add_with_tax(float f)
{
    float tax_rate;

    tax_rate = 1 + tax_percent / 100.0;
    total =  total + (f * tax_rate);
    count = count + 1;

    return total;
}