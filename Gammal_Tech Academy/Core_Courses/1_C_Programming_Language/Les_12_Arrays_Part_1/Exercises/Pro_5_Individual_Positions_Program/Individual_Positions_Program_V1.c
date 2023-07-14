

/* >>> Individual Positions Program ( Version 1 ) <<< */

/* >>> A program in which array contains 10 digits, and prints the numbers in the individual positions inside the array. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Individual Positions Program ( Version 1 ) .. \n\n");

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    for (i = 0; i < 10; i++)
    {
        if (array[i] % 2 != 0)
        {
            printf("Index : %d\n", i);
        }
    }

    printf("\n\n\n");

    return 0;
}