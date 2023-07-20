

/* >>> Num 101100101100 From Bin To Dec Program ( Version 1 ) <<< */

/* >>> Convert number (101100101100) from binary to decimal. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Num 101100101100 From Bin To Dec Program ( Version 1 ) ..\n\n");

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