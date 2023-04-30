

/* >>> Any Num From Dec To Hex Program ( Version - 1 ) <<< */

/* >>> A program that converts from decimal to hexadecimal. <<< */

#include <stdio.h>

int dec_to_hex();

int main(void)
{
    printf("\n\nYou welcome in Any Num From Dec To Hex Program ( Version - 1 ) ..\n\n");

    dec_to_hex();

    return 0;
}

// Function ..
int dec_to_hex()
{
    int num;

    printf("Please enter a Decimal number : ");
    scanf("%d", &num);

    printf("\nDecimal number : %d\n\n", num);
    printf("Hexadecimal number : %X\n\n\n", num);

    return 0;
}
