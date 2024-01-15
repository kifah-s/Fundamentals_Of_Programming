

/* >>> Program To Convert Meters To Centimeters ( Version 3 ) <<< */

/* >>> Program To Convert Meters To Centimeters.
Required : Write a program that assigns a number in a variable, then converts this number to centimeters and prints it. <<< */

#include <stdio.h>

void wel_mas_fun();
int centimeters_fun(int meters);

int main()
{
    wel_mas_fun();

    int meters = 5;
    centimeters_fun(meters);

    return 0;
}

// Functions;

// Welcome massage function;
void wel_mas_fun()
{
    printf("\n\nYou welcome in Program To Convert Meters To Centimeters ( Version 3 ) ..\n\n");
}

// Centimeters function;
int centimeters_fun(int meters)
{
    int centimeters = meters * 100;

    printf("%d Meters = %d Centimeters\n\n\n", meters, centimeters);
}