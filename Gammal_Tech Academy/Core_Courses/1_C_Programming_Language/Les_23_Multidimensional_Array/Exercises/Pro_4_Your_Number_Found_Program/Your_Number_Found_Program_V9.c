

/* >>> Your Number Found Program ( Version 9 ) <<< */

/* >>> A program with 3D array contains 8 digits, and the user is asked to enter a number, if the number exists prints "Found" and conversely prints "not found". <<< */

#include <stdio.h>

int your_number_found();

int main()
{
    printf("\n\nYou welcome in Your Number Found Program ( Version 9 ) ..\n\n");

    your_number_found();

    return 0;
}

// Functions ..
// your number found function;
int your_number_found()
{
    // Declaration array, variables and counters;
    int x[2][2][2] = {8, 5, 87, 2, 7, 3, 5, 1}, i, j, k, n;

    // Receiving values from user;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Checking the number in array;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                if (x[i][j][k] == n)
                {
                    printf("\nFound\n\n\n");
                    return 0;
                }
            }
        }
    }
    printf("\nNot found\n");
    printf("\n\n");
    return 0;
}