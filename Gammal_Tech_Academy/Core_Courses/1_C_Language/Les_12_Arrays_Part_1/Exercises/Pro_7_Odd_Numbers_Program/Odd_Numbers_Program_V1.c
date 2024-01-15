

/* >>> Odd Numbers Program ( Version 1 ) <<< */

/* >>> A program that contains an array of 10 numbers and prints the odd numbers inside the array. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Odd Numbers Program ( Version 1 ) .. \n\n");

    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    for (i = 0; i < 10; i++)
    {
        if (num[i] % 2 != 0)
        {
            printf("Num : %d\n", num[i]);
        }
    }

    printf("\n\n\n");

    return 0;
}