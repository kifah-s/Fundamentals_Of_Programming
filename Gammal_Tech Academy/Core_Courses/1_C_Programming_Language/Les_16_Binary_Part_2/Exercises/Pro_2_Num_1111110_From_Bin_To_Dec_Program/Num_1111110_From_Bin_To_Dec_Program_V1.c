

/* >>> Num 1111110 From Bin To Dec Program ( Version 1 ) <<< */

/* >>> Convert number (1111110) from binary to decimal. <<< */

#include <stdio.h>
#include <math.h>

int main()
{
    printf("\n\nYou welcome in Num 1111110 From Bin To Dec Program ( Version 1 ) ..\n\n");

    long x = 1111110, y = 0, i = 0, j;

    printf("The binary number is : %d", x);

    while (x != 0)
    {
        j = x % 10;
        x = x / 10;
        y = y + j * pow(2, i);
        i++;
    }
    printf("\n\nThe decimal number is : %d\n\n\n", y);
    
    return 0;
}