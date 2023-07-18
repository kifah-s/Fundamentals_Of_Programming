

/* >>> Any Num From Bin To Dec Program ( Version 4 ) <<< */

/* >>> Convert any number from binary to decimal. <<< */

#include <stdio.h>
#include <math.h>

void welcomeMassageFun();
long long getNumberFun();
int bin_to_dec(long x);

int main()
{
    welcomeMassageFun();

    long long x = getNumberFun();
    bin_to_dec(x);

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Any Num From Bin To Dec Program ( Version 4 ) ..\n\n");
}

// Get number function;
long long getNumberFun()
{
    long long x;
    printf("Please enter a binary number : ");
    scanf("%lld", &x);
    printf("\nThe binary number is : %d", x);

    return x;
}

// bin to dec function;
int bin_to_dec(long x)
{
    long y = 0, i = 0, j;

    while (x != 0)
    {
        j = x % 10;
        x = x / 10;
        y = y + j * pow(2, i);
        i++;
    }
    printf("\n\nThe decimal number is : %d\n\n\n", y);
}