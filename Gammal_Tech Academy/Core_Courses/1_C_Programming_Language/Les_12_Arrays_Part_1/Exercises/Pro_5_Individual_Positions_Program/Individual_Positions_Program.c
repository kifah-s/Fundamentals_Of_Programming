

/* >>> Individual Positions Program <<< */

/* >>> A program in which array contains 10 digits, and prints the numbers in the individual positions inside the array. <<< */

#include <stdio.h>

int main(void)
{
    printf("\n\nYou welcome in Individual Positions Program .. \n\n");

    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
        {
            printf("Index : %d\n", num[i]);
        }
    }

    printf("\n\n\n");
}