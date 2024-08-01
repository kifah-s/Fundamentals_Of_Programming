

//* Rows And Columns Program (Version 1).

/*
 * Write a program that prompts the user to enter the number of rows and columns for a matrix,
 * then takes input for a matrix of the specified size,
 * and finally prints the entered matrix.
 */

/*
! Input:
! Please enter the number of rows: 3
! Please enter the number of columns: 3
! Please enter values for the array:
! Val: 1
! Val: 2
! Val: 3
! Val: 4
! Val: 5
! Val: 6
! Val: 7
! Val: 8
! Val: 9

! Output:
! Entered array:
! 1 2 3
! 4 5 6
! 7 8 9
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingRowsFun(int r);
int gettingColumnsFun(int c);
void gettingValuesFun(int r, int c, int arr[r][c]);
void printArrayFun(int r, int c, int arr[r][c]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int rows = 0, columns = 0;

    // Calling Functions.
    rows = gettingRowsFun(rows);
    columns = gettingColumnsFun(columns);

    // Declare Array.
    int myArray[rows][columns];

    // Calling Functions.
    gettingValuesFun(rows, columns, myArray);
    printArrayFun(rows, columns, myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Rows And Columns Program (Version 1) ..\n\n");
}

// Getting Rows - Function.
int gettingRowsFun(int r)
{
    printf("Please enter the number of rows: ");
    scanf("%d", &r);

    return r;
}

// Getting Columns - Function.
int gettingColumnsFun(int c)
{
    printf("Please enter the number of Columns: ");
    scanf("%d", &c);

    return c;
}

// Getting values for a 3x3 array - Function.
void gettingValuesFun(int r, int c, int arr[r][c])
{
    printf("Please enter values for the array: \n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Val: ");
            scanf("%d", &arr[i][j]);
        }
    }
}

// Print Array - Function.
void printArrayFun(int r, int c, int arr[r][c])
{
    printf("\nEntered array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
//* End Function ..
