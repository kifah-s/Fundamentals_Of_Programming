

/* >>> Any Num From Hex To Dec Program ( Version 2 ) <<< */

/* >>> A program that converts from hexadecimal to decimal. <<< */

#include <stdio.h>

int hex_to_dec();

int main()
{
    printf("\n\nYou welcome in Any Num From Hex To Dec Program ( Version 2 ) ..\n\n");

    hex_to_dec();

    return 0;
}

// Functions ..
// hex to dec function;
int hex_to_dec()
{
    int num;

    printf("Please enter a Hexadecimal number : ");
    scanf("%X", &num);

    printf("\nHexadecimal number : %X\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}
