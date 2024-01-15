

/* >>> Any Num From Dec To Oct Program ( Version 1 ) <<< */

/* >>> Write a program that converts from decimal to octal. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Any Num From Dec To Oct Program ( Version 1 ) ..\n\n");

    int num;

    printf("Please enter a number in decimal : ");
    scanf("%d", &num);

    printf("\nDecimal number : %d\n\n", num);
    printf("Octal number : %o\n\n\n", num);

    return 0;
}