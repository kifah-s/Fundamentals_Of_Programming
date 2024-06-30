

/* >>> Even Numbers Program ( Version 1 ) <<< */

/* >>> A program in which an array contains 10 numbers and prints the even numbers inside the array. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Even Numbers Program( Version 1 ) .. \n\n");

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    for (i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("Num : %d\n", array[i]);
        }
    }

    printf("\n\n\n");

    return 0;
}