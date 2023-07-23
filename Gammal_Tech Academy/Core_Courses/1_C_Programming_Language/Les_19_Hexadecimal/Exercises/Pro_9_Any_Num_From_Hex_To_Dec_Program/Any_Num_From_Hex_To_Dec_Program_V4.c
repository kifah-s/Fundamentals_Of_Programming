

/* >>> Any Num From Hex To Dec Program ( Version 4 ) <<< */

/* >>> A program that converts from hexadecimal to decimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getHexadecimalNumberFun();
int hex_to_dec(int num);

int main()
{
    welcomeMassageFun();

    int hexadecimal_number = getHexadecimalNumberFun();
    hex_to_dec(hexadecimal_number);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Hex To Dec Program ( Version 4 ) ..\n\n");
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
int hex_to_dec(int num)
{
    printf("\nHexadecimal number : %X\n\n", num);
    printf("Decimal number : %d\n\n\n", num);
}
