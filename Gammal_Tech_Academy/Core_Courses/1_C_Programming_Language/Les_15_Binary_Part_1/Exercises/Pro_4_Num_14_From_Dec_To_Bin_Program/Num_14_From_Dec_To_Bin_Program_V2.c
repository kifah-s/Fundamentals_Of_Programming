

/* >>> Num 14 From Dec To Bin Program ( Version 2 ) <<< */

/* >>> Convert the number (14) from decimal to Binary. <<< */

#include <stdio.h>

void decimal_to_binary(int n);

int main()
{
    printf("\n\nYou welcome in Num 14 From Dec To Bin Program ( Version 2 ) ..\n\n");

    int n = 14;

    printf("The decimal number is : %d", n);

    decimal_to_binary(n);

    return 0;
}

// Functions ..
// decimal to binary function;
void decimal_to_binary(int n)
{
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