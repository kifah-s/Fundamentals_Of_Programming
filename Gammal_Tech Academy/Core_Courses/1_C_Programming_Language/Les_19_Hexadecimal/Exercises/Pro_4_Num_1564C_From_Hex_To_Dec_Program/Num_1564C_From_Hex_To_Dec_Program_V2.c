

/* >>> Num 1564C From Hex To Dec Program ( Version - 2 ) <<< */

/* >>> Convert number (1564C) from hexadecimal to decimal. <<< */

#include <stdio.h>

int hex_to_dec();

int main(void)
{
    printf("\n\nYou welcome in Num 1564C From Hex To Dec Program ( Version - 2 ) ..\n\n");

    hex_to_dec();

    return 0;
}

// Function ..
int hex_to_dec()
{
    int num = 0X1564C;

    printf("Hexadecimal number : %X\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}