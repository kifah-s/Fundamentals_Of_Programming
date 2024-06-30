

/* >>> Num 524451 From Oct To Dec Program ( Version 3 ) <<< */

/* >>> Convert number (524451) from octal to decimal. <<< */

#include <stdio.h>

int oct_to_dec();
void welcomeMassageFun();

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
    printf("\n\nYou welcome in Num 524451 From Oct To Dec Program ( Version 3 ) ..\n\n");
}

// oct to dec function;
int oct_to_dec()
{
    int num = 0524451;

    printf("Octal number : %o\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}