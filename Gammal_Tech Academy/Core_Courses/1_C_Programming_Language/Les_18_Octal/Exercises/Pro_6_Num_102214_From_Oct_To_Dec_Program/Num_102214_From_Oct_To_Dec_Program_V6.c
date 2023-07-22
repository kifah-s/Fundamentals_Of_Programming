

/* >>> Num 102214 From Oct To Dec Program ( Version 6 ) <<< */

/* >>> Convert number (102214) from octal to decimal. <<< */

#include <stdio.h>
#include <math.h>

void welcomeMassageFun();
long long convert_octal_to_decimal(long long octal_number);

int main()
{
    welcomeMassageFun();

    long long decimal_number = convert_octal_to_decimal(102214);
    printf("102214 in octal = %lld in decimal\n\n\n", decimal_number);

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 102214 From Oct To Dec Program ( Version 6 ) ..\n\n");
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