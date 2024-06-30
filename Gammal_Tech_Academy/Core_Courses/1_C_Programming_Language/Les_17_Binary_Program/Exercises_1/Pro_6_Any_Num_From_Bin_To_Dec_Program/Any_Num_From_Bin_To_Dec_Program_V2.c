

/* >>> Any Num From Bin To Dec Program ( Version 2 ) <<< */

/* >>> A program that asks the user to enter a binary number and converts that number to decimal. <<< */

#include <stdio.h>

int binary_to_decimal();

int main()
{
    printf("\n\nYou welcome in Any Num From Bin To Dec Program ( Version 2 ) ..\n\n");

    binary_to_decimal();

    return 0;
}

// Functions ..
// binary to decimal function;
int binary_to_decimal()
{
    int binary;
    int decimal = 0, y = 1;

    printf("Enter a binary number : ");
    scanf("%d", &binary);

    while (binary)
    {
        decimal += (binary % 10) * y;
        binary /= 10;
        y *= 2;
    }
    printf("\nThe decimal number is : %d\n\n\n", decimal);

    return 0;
}