

/* >>> Any Num From Bin To Dec Program ( Version 1 ) <<< */

/* >>> Convert Any Number from binary to decimal. <<< */

#include <stdio.h>
#include <math.h>

int main()
{
    printf("\n\nYou welcome in Any Num From Bin To Dec Program ( Version 1 ) ..\n\n");

    long x, y = 0, i = 0, j;

    printf("Please enter a binary number : ");
    scanf("%lld", &x);
    printf("\nThe binary number is : %d", x);

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