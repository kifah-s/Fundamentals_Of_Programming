

/* >>> Any Num From Hex To Dec Program ( Version 1 ) <<< */

/* >>> A program that converts from hexadecimal to decimal. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Any Num From Hex To Dec Program ( Version 1 ) ..\n\n");

    int num;
    printf("Please enter a Hexadecimal number : ");
    scanf("%X", &num);

    printf("\nHexadecimal number : %X\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}