

/* >>> Num AA415 From Hex To Dec Program ( Version 3 ) <<< */

/* >>> Convert number (AA415) from hexadecimal to decimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int hex_to_dec();

int main()
{
    welcomeMassageFun();
    hex_to_dec();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num AA415 From Hex To Dec Program ( Version 3 ) ..\n\n");
}

// hex to dec function;
int hex_to_dec()
{
    int num = 0XAA415;

    printf("Hexadecimal number : %X\n\n", num);
    printf("Decimal number : %d\n\n\n", num);

    return 0;
}