

//* Last Row Program (Version 1).

/*
 * Write a program that prompts the user to enter values for a 3x3 matrix,
 * and then prints the last row of the entered matrix.
 */

/*
! Input:
! Please enter values for a 3x3 array:
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
! Last row of the entered array:
! 7 8 9 
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingValuesFun(int arr[3][3]);
void printLastRowFun(int arr[3][3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[3][3];

    // Calling Functions.
    gettingValuesFun(myArray);
    printLastRowFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Last Row Program (Version 1) ..\n\n");
}

// Getting values for a 3x3 array - Function.
void gettingValuesFun(int arr[3][3])
{
    printf("Please enter values for a 3x3 array: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Val: ");
            scanf("%d", &arr[i][j]);
        }
    }
}

// Print Array - Function.
void printLastRowFun(int arr[3][3])
{
    printf("\nLast row of the entered array:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d  ", arr[2][i]);
    }
}
//* End Function ..
