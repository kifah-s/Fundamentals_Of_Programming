

/* >>> Replacing Number 0 Program ( Version 5 ) <<< */

/* >>> A program in which 3D array contains a set of numbers, of which there is a number 0 and the user is asked to enter a number and then records this number in zero place and prints the array on the screen. <<< */

#include <stdio.h>

int replacing_number_0();

int main()
{
    printf("\n\nYou welcome in Replacing Number 0 Program ( Version 5 ) ..\n\n");

    replacing_number_0();

    return 0;
}

// Functions ..
// replacing number 0 function;
int replacing_number_0()
{
    // Declaration array, counters and variable;
    int x[2][2][2] = {8, 5, 0, 2, 7, 3, 5, 1}, i, j, k, n;

    // Receive value from user;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n");
    // replace number 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                if (x[i][j][k] == 0)
                {
                    x[i][j][k] = n;
                }
                // printf("%d  ", x[i][j][k]);
            }
        }
    }
    // printf("\n\n\n");

    // Printing array;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%d  ", x[i][j][k]);
            }
        }
    }
    printf("\n\n\n");

    return 0;
}