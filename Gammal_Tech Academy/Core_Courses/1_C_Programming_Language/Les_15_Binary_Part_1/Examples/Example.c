

/* >>> Example <<< */

#include <stdio.h>

int main()
{
    int binary[32], i = 0, n = 10;

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