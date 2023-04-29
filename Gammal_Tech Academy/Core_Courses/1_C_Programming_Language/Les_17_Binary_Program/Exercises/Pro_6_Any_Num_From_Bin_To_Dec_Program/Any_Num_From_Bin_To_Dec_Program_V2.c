

/* >>> Num 101100101100 From Bin To Dec Program ( Version - 2 ) <<< */

/* >>> Convert number (101100101100) from binary to decimal. <<< */

#include <stdio.h>

int binary_to_decimal();

int main(void)
{
    printf("\n\nYou welcome in Num 101100101100 From Bin To Dec Program ( Version - 2 ) ..\n\n");

    binary_to_decimal();

    return 0;
}

// Function ..
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