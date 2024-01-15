

/* >>> Any Num From Oct To Dec Program ( Version 2 ) <<< */

/* >>> Write a program that converts from octal to decimal. <<< */

#include <stdio.h>

int oct_to_dec();

int main()
{

    printf("\n\nYou welcome in Any Num From Oct To Dec Program ( Version 2 ) ..\n\n");
    
    oct_to_dec();

    return 0;
}

// Functions ..
// oct to dec function;
int oct_to_dec()
{
    int num;
    printf("Please enter a number in octal : ");
    scanf("%o", &num);

    printf("\nOctal number : %o\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}