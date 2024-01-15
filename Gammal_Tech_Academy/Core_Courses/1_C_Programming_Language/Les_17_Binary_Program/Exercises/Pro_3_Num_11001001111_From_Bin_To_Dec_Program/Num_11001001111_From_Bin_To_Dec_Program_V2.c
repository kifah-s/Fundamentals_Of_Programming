

/* >>> Num 11001001111 From Bin To Dec Program ( Version 2 ) <<< */

/* >>> Convert number (11001001111) from binary to decimal. <<< */

#include <stdio.h>

int binary_to_decimal();

int main()
{
    printf("\n\nYou welcome in Num 11001001111 From Bin To Dec Program ( Version 2 ) ..\n\n");

    binary_to_decimal();

    return 0;
}

// Functions ..
// binary to decimal function;
int binary_to_decimal()
{
    long long binary = 11001001111;
    int decimal = 0, y = 1;

    while (binary)
    {
        decimal += (binary % 10) * y;
        binary /= 10;
        y *= 2;
    }
    printf("\nThe decimal number is : %d\n\n\n", decimal);

    return 0;
}