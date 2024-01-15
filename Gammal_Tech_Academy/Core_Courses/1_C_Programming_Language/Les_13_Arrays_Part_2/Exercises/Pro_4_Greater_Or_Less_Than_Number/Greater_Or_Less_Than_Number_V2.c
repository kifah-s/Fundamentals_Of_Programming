

/* >>> Greater Or Less Than Number ( Version 2 ) <<< */

/* >>> The program, in which an array contains 10 numbers, asks the user to enter a number and calculates how many numbers are greater than this number inside the array and how many smaller numbers of this number are inside the array. <<< */

#include <stdio.h>

int main()
{
    printf("\n\nYou welcome in Greater Or Less Than Number ( Version 2 ) .. \n\n");

    while (1)
    {
        int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, num, larger = 0, smaller = 0, i;

        printf("Please enter a number : ");
        scanf("%d", &num);

        for (i = 0; i < 10; i++)
        {
            if (num < arr[i])
            {
                larger++;
            }
            else if (num > arr[i])
            {
                smaller++;
            }
        }
        printf("\nThere are ( %d ) numbers \' Greater \' than the entered number and ( %d ) numbers \' Less \' than it.\n\n\n", larger, smaller);
    }

    return 0;
}
