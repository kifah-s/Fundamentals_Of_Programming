

/* >>> Num 11110010111 From Bin To Dec Program ( Version 1 ) <<< */

/* >>> Convert number (11110010111) from binary to decimal. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Num 11110010111 From Bin To Dec Program ( Version 1 ) ..\n\n");

    long long binary = 11110010111;
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