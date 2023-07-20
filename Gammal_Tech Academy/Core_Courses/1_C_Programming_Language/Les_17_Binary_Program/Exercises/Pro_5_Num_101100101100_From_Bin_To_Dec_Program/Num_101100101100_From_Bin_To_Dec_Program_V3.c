

/* >>> Num 101100101100 From Bin To Dec Program ( Version 3 ) <<< */

/* >>> Convert number (101100101100) from binary to decimal. <<< */

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
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 101100101100 From Bin To Dec Program ( Version 3 ) ..\n\n");
}

// binary to decimal function;
int binary_to_decimal()
{
    long long binary = 101100101100;
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