

/* >>> Num 15420 From Oct To Dec Program ( Version 3 ) <<< */

/* >>> Convert number (15420) from octal to decimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int oct_to_dec();

int main()
{
    welcomeMassageFun();
    oct_to_dec();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 15420 From Oct To Dec Program ( Version 3 ) ..\n\n");
}

// oct to dec function;
int oct_to_dec()
{
    int num = 015420;

    printf("Octal number : %o\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}