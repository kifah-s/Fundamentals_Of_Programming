

/* >>> Print Name 10 Times Program <<< */

/* >>> A program to find the sum of the first 10 numbers. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Print Name 10 Times Program ..\n\n");

    int i,
        sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
        printf("\n%d", sum);
    }
    printf("\nTotal is : %d\n\n\n", sum);

    return 0;
}