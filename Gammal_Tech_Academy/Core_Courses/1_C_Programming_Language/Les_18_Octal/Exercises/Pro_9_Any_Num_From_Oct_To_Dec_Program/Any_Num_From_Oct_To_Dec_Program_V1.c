

/* >>> Any Num From Oct To Dec Program ( Version 1 ) <<< */

/* >>> Write a program that converts from octal to decimal. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Any Num From Oct To Dec Program ( Version 1 ) ..\n\n");

    int num;

    printf("Please enter a number in octal : ");
    scanf("%o", &num);

    printf("\nOctal number : %o\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}