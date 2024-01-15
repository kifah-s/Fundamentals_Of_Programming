

/* >>> Num 100425 From Oct To Dec Program ( Version 6 ) <<< */

/* >>> Convert number (100425) from octal to decimal. <<< */

#include <stdio.h>
#include <math.h>

void welcomeMassageFun();
long long convert_octal_to_decimal(long long octal_number);

int main()
{
    welcomeMassageFun();

    long long decimal_number = convert_octal_to_decimal(100425);
    printf("100425 in octal = %lld in decimal\n\n\n", decimal_number);

    return 0;
}

// Function ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 100425 From Oct To Dec Program ( Version 6 ) ..\n\n");
}

// convert octal to decimal function;
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