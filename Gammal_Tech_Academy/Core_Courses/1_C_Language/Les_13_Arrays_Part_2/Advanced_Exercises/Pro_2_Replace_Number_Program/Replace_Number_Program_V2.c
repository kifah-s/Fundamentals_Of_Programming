

/* >>> Replace Number Program ( Version 2 ) <<< */

/* >>> A program, in which array contains 5 digits of these numbers is the number 0, asks the user to enter a number and place it inside the array in place zero and print the array on the screen. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Replace Number Program ( Version 2 ) .. \n\n");

    int arr[5] = {1, 2, 0, 4, 5}, num, i;

    printf("Please enter a number : ");
    scanf("%d", &num);

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == 0)
        {
            arr[i] = num;
        }
        printf("%d ", arr[i]);
    }
    printf("\n\n\n");

    return 0;
}