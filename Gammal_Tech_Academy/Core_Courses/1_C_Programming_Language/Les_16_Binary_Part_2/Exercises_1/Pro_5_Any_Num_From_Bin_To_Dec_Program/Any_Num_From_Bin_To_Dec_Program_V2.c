

/* >>> Any Num From Bin To Dec Program ( Version 2 ) <<< */

/* >>> Convert any number from binary to decimal. <<< */

#include <stdio.h>
#include <math.h>

int bin_to_dec();

int main()
{
    printf("\n\nYou welcome in Any Num From Bin To Dec Program ( Version 2 ) ..\n\n");

    bin_to_dec();

    return 0;
}

// Functions ..
// bin to dec function;
int bin_to_dec()
{
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
}