

/* >>> Num 102214 From Oct To Dec Program ( Version 5 ) <<< */

/* >>> Convert number (102214) from octal to decimal. <<< */

#include <stdio.h>
#include <math.h>

void welcomeMassageFun();
long long convert_octal_to_decimal(long long octal_number);

int main()
{
    welcomeMassageFun();
    printf("102214 in octal = %lld in decimal\n\n\n", convert_octal_to_decimal(102214));

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 102214 From Oct To Dec Program ( Version 5 ) ..\n\n");
}

// convert octal to decimal function
long long convert_octal_to_decimal(long long octal_number)
{
    long long decimal_number = 0, i = 0;

    while (octal_number != 0)
    {
        decimal_number = decimal_number + (octal_number % 10) * pow(8, i);
        i++;
        octal_number = octal_number / 10;
    }

    i = 1;

    return decimal_number;
}