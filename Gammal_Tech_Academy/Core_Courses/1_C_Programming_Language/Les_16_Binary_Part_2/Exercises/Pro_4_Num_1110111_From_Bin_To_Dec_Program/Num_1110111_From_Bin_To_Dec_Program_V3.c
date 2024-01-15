

/* >>> Num 1110111 From Bin To Dec Program ( Version 3 ) <<< */

/* >>> Convert number (1110111) from binary to decimal. <<< */

#include <stdio.h>
#include <math.h>

void welcomeMassageFun();
int bin_to_dec();

int main()
{
    welcomeMassageFun();
    bin_to_dec();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 1110111 From Bin To Dec Program ( Version 3 ) ..\n\n");
}

// bin to dec function;
int bin_to_dec()
{
    long x = 1110111, y = 0, i = 0, j;

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