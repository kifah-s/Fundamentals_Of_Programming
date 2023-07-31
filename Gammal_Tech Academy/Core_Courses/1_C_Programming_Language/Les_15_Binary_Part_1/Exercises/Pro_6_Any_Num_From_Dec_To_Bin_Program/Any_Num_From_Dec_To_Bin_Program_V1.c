

/* >>> Any Num From Dec To Bin Program ( Version 1 ) <<< */

/* >>> Convert any number from decimal to Binary. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Any Num From Dec To Bin Program ( Version 1 ) ..\n\n");

    int binary[32], i = 0, n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("\nThe decimal number is : %d", n);
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