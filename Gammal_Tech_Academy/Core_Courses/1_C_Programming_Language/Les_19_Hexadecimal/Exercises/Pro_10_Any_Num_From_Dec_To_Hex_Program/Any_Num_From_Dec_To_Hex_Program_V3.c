

/* >>> Any Num From Dec To Hex Program ( Version 3 ) <<< */

/* >>> A program that converts from decimal to hexadecimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int dec_to_hex();

int main()
{
    welcomeMassageFun();
    dec_to_hex();

    return 0;
}

// Functions ..
// welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Dec To Hex Program ( Version 3 ) ..\n\n");
}

// dec to hex function;
int dec_to_hex()
{
    int num;
    printf("Please enter a Decimal number : ");
    scanf("%d", &num);

    printf("\nDecimal number : %d\n\n", num);
    printf("Hexadecimal number : %X\n\n\n", num);

    return 0;
}
