

/* >>> Any Num From Oct To Dec Program ( Version 4 ) <<< */

/* >>> Write a program that converts from octal to decimal. <<< */

#include <stdio.h>
#include <math.h>

long long convert_octal_to_decimal(long long octal_number);

int main()
{
    printf("\n\nYou welcome in Any Num From Oct To Dec Program ( Version 4 ) ..\n\n");

    int octal_number;

    printf("Please enet octal number : ");
    scanf("%d", &octal_number);

    printf("\n%d in octal = %lld in decimal\n\n\n",octal_number, convert_octal_to_decimal(octal_number));

    return 0;
}

// Functions ..
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