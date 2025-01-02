

//* Maximum And Minimum 4 Program (Version 1).

/*
* Write a program to find the maximum and minimum elements in a 2D matrix.

! Output:
! Maximum Element: 9
! Minimum Element: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void resultFun(int r, int c, int myNum[r][c], int max, int min);

int main()
{
    // Declare Variables.
    int myNumbers[3][3] = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};

    int rows = 3, columns = 3;

    int maximumNumber = myNumbers[0][0], minimumNumber = myNumbers[0][0];

    // Call Functions.
    resultFun(rows, columns, myNumbers, maximumNumber, minimumNumber);

    return 0;
}

//* Functions ..
// Welcome Message - Function.
void printWelcomeMessageFun()
{
    printf("\n\nYou welcome in Maximum And Minimum 4 Program (Version 1) ..\n\n");
}

// Find Maximum Number - Function.
int findMaximumNumberFun(int r, int c, int myNum[r][c], int max)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (myNum[i][j] > max)
            {
                max = myNum[i][j];
            }
        }
    }

    return max;
}

// Find Minimum Number - Function.
int findMinimumNumberFun(int r, int c, int myNum[r][c], int min)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (myNum[i][j] < min)
            {
                min = myNum[i][j];
            }
        }
    }

    return min;
}

// Result - Function.
void resultFun(int r, int c, int myNum[r][c], int max, int min)
{
    printWelcomeMessageFun();
    max = findMaximumNumberFun(r, c, myNum, max);
    min = findMinimumNumberFun(r, c, myNum, min);

    printf("Maximum Element: %d\n", max);
    printf("Minimum Element: %d\n\n", min);
}
//* End Function ..
