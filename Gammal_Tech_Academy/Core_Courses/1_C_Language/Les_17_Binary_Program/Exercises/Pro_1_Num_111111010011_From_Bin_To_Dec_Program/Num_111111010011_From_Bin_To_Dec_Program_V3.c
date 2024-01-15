

/* >>> Num 111111010011 From Bin To Dec Program ( Version 3 ) <<< */

/* >>> Convert number (111111010011) from binary to decimal. <<< */

#include <stdio.h>

void welcomeMassageFun();
int binary_to_decimal();

int main()
{
    welcomeMassageFun();
    binary_to_decimal();

    return 0;
}

// Functions ..
// Welcome massage function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 111111010011 From Bin To Dec Program ( Version 3 ) ..\n\n");
}

// binary to decimal function;
int binary_to_decimal()
{
    long long binary = 111111010011;
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