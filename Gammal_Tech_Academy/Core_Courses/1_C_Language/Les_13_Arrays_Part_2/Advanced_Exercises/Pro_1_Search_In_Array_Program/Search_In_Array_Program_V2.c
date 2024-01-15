

/* >>> Search In Array Program ( Version 2 ) <<< */

/* >>> A program, in which an array contains 10 digits, asks the user to enter a number and searches inside the array in the place of this number and prints the order of the number in the array on the screen. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Search In Array Program ( Version 2 ) .. \n\n");

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, num, i;

    printf("Please enter a number from 1 to 10 : ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        if (num == i)
        {
            printf("\nThe number index is : %d\n", i - 1);
            printf("The order of the number is : %d\n\n\n", i);
        }
    }

    return 0;
}