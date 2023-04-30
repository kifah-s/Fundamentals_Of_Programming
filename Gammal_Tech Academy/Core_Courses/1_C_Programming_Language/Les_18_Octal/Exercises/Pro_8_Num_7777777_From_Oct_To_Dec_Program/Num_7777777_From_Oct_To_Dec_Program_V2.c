

/* >>> Num 7777777 From Oct To Dec Program ( Version - 2 ) <<< */

/* >>> Convert number (7777777) from octal to decimal. <<< */

#include <stdio.h>

int oct_to_dec();

int main(void)
{
    printf("\n\nYou welcome in Num 7777777 From Oct To Dec Program ( Version - 2 ) ..\n\n");

    oct_to_dec();

    return 0;
}

// Function ..
int oct_to_dec()
{
    int num = 07777777;

    printf("Octal number : %o\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}