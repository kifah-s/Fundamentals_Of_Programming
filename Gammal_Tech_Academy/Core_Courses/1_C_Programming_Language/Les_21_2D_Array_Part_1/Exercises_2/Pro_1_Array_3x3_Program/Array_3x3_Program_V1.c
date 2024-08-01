

//* Array 3x3 Program (Version 1).

/*
 * Write a program that prompts the user to enter values for a 3x3 matrix,
 * and then prints the entered matrix.
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
! 1 2 3
! 4 5 6
! 7 8 9
*/

#include <stdio.h>

void welcomeMessageFun();

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[3][3];

    printf("Please enter values for a 3x3 array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Val: ");
            scanf("%i", &myArray[i][j]);
        }
    }

    printf("\nEntered Array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i  ", myArray[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Array 3x3 Program (Version 1) ..\n\n");
}
//* End Function ..
