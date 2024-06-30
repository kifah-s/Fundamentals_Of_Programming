

/* >>> Num 100425 From Oct To Dec Program ( Version 3 ) <<< */

/* >>> Convert number (100425) from octal to decimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int oct_to_dec();

int main()
{
    welcomeMassageFun();
    oct_to_dec();

    return 0;
}

// Function ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 100425 From Oct To Dec Program ( Version 3 ) ..\n\n");
}

// oct to dec function;
int oct_to_dec()
{
    int num = 0100425;

    printf("Octal number : %o\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}