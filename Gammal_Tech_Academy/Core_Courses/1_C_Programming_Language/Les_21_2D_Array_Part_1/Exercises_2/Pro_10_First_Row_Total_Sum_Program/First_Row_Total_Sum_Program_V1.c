

//* First Row Total Sum Program (Version 1).

/*
 * Write a program that prompts the user to enter values for a 3x3 matrix,
 * calculates the sum of the elements in the first row, and prints the total sum.
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
! Sum of Array elements in the first row: 6
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingValuesFun(int arr[3][3]);
void calculateTotalSumFun(int arr[3][3], int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and variables.
    int myArray[3][3], totalSum = 0;

    // Calling Functions.
    gettingValuesFun(myArray);
    calculateTotalSumFun(myArray, totalSum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in First Row Total Sum Program (Version 1) ..\n\n");
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

// Print Second Row - Function.
void calculateTotalSumFun(int arr[3][3], int sum)
{
    for (int i = 0; i < 3; i++)
    {
        sum = sum + arr[0][i];
    }

    printf("\nSum of Array elements in the first row: %d", sum);
}
//* End Function ..
