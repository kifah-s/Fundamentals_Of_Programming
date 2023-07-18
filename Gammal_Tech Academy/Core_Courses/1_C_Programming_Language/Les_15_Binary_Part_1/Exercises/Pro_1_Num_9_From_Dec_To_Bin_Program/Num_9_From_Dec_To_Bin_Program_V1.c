

/* >>> Num 9 From Dec To Bin Program ( Version 1 ) <<< */

/* >>> Convert the number (9) from decimal to Binary. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Num 9 From Dec To Bin Program ( Version 1 ) ..\n\n");

    int binary[32], i = 0, n = 9;

    printf("The decimal number is : %d", n);
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("\n\nThe binary number is : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
    printf("\n\n\n");

    return 0;
}