

/* >>> Any Num From Hex To Dec Program ( Version 5 ) <<< */

/* >>> A program that converts from hexadecimal to decimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getHexadecimalNumberFun();
int hex_to_dec();

int main()
{
    welcomeMassageFun();

    hex_to_dec();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Hex To Dec Program ( Version 5 ) ..\n\n");
}

// get hexadecimal number function;
int getHexadecimalNumberFun()
{
    int num;
    printf("Please enter a Hexadecimal number : ");
    scanf("%X", &num);

    return num;
}

// hex to dec function;
int hex_to_dec()
{
    int hexadecimal_number = getHexadecimalNumberFun();

    printf("\nHexadecimal number : %X\n\n", hexadecimal_number);
    printf("Decimal number : %d\n\n\n", hexadecimal_number);
}
