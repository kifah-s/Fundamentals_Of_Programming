

/* >>> Num 7777777 From Oct To Dec Program ( Version 3 ) <<< */

/* >>> Convert number (7777777) from octal to decimal. <<< */

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
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 7777777 From Oct To Dec Program ( Version 3 ) ..\n\n");
}

// oct to dec function;
int oct_to_dec()
{
    int num = 07777777;

    printf("Octal number : %o\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}