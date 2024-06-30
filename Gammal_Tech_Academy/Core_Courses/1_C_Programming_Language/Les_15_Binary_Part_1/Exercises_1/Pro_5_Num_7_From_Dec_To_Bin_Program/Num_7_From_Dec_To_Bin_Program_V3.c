

/* >>> Num 7 From Dec To Bin Program ( Version 3 ) <<< */

/* >>> Convert the number (7) from decimal to Binary. <<< */

#include <stdio.h>

void welcomeMassageFun();
void decimal_to_binary();

int main()
{
    welcomeMassageFun();
    decimal_to_binary();

    return 0;
}

// Functions ..
// Welcome Massage Function;
void welcomeMassageFun()
{
    printf("\n\nYou welcome in Num 7 From Dec To Bin Program ( Version 3 ) ..\n\n");
}

// decimal to binary function;
void decimal_to_binary()
{
    int n = 7;
    printf("The decimal number is : %d", n);

    int binary[32], i = 0;

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("\n\nThe binary number is: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n\n\n");
}