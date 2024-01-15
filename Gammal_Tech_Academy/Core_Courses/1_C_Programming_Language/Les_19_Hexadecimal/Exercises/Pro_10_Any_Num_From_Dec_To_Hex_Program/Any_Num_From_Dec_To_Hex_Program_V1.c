

/* >>> Any Num From Dec To Hex Program ( Version 1 ) <<< */

/* >>> A program that converts from decimal to hexadecimal. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Any Num From Dec To Hex Program ( Version 1 ) ..\n\n");

    int num;
    printf("Please enter a Decimal number : ");
    scanf("%d", &num);

    printf("\nDecimal number : %d\n\n", num);
    printf("Hexadecimal number : %X\n\n\n", num);

    return 0;
}