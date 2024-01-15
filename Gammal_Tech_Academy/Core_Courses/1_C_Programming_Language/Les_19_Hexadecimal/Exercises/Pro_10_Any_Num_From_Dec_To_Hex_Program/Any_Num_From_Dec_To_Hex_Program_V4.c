

/* >>> Any Num From Dec To Hex Program ( Version 4 ) <<< */

/* >>> A program that converts from decimal to hexadecimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int getDecimalNumberFun();
int dec_to_hex(int num);

int main()
{
    welcomeMassageFun();

    int num = getDecimalNumberFun();
    dec_to_hex(num);

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Dec To Hex Program ( Version 4 ) ..\n\n");
}

// get decimal number function;
int getDecimalNumberFun()
{
    int num;
    printf("Please enter a Decimal number : ");
    scanf("%d", &num);

    return num;
}

// dec to hex function;
int dec_to_hex(int num)
{
    printf("\nDecimal number : %d\n\n", num);
    printf("Hexadecimal number : %X\n\n\n", num);
}
