

/* >>> Your Number Found Program ( Version 1 ) <<< */

/* >>> A program with 3D array contains 8 digits, and the user is asked to enter a number, if the number exists prints "Found" and conversely prints "not found". <<< */

#include <stdio.h>

int your_number_found();

int main()
{
    printf("\n\nYou welcome in Your Number Found Program ( Version 1 ) ..\n\n");

    your_number_found();

    return 0;
}

// Functions ..
// your number found function;
int your_number_found()
{
    // Declaration array;
    int arr[2][2][2] = {{{1, 2}, {3, 4}},
                        {{5, 6}, {7, 8}}};

    // Declaration variables and counters;
    int num, found, i, j, k;

    // Receiving values from user;
    printf("Please enter a number : ");
    scanf("%d", &num);

    // Checking the number in array;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                if (arr[i][j][k] == num)
                {
                    found = num;
                }
            }
        }
    }

    // Print found number or not found number;
    if (found == num)
    {
        printf("\nYes i'm found your number in my array ' %d '", num);
    }
    else
    {
        printf("\nOh i'm not found your number in my array ' %d '", num);
    }
    printf("\n\n\n");

    return 0;
}