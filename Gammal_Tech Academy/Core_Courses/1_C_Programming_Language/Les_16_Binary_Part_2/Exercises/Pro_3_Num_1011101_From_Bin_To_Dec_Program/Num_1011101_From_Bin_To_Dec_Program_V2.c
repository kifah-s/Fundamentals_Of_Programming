

/* >>> Num 1011101 From Bin To Dec Program ( Version 2 ) <<< */

/* >>> Convert number (1011101) from binary to decimal. <<< */

#include <stdio.h>
#include <math.h>

int bin_to_dec();

int main()
{
    printf("\n\nYou welcome in Num 1011101 From Bin To Dec Program ( Version 2 ) ..\n\n");

    bin_to_dec();

    return 0;
}

// Functions ..
// bin to dec function;
int bin_to_dec()
{
    long x = 1011101, y = 0, i = 0, j;

    printf("The binary number is : %d", x);

    while (x != 0)
    {
        j = x % 10;
        x = x / 10;
        y = y + j * pow(2, i);
        i++;
    }
    printf("\n\nThe decimal number is : %d\n\n\n", y);
}