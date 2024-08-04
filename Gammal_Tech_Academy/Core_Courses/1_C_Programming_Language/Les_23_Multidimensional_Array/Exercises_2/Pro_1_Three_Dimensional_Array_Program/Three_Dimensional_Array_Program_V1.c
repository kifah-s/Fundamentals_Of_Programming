

//* Three Dimensional Array Program (Version 1).

/*
 * Write a program that uses a three-dimensional array x to store integer values,
 * The program prompts the user to input values into the array using three nested loops,
 * After inputting the values, the program prints the content of the array.
 */

/*
! Input:
! 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9

! Output:
! 1 2 3
! 4 5 6
! 7 8 9

! 1 2 3
! 4 5 6
! 7 8 9

! 1 2 3
! 4 5 6
! 7 8 9
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingElementsFun(int arr[3][3][3]);
void printArrayFun(int arr[3][3][3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[3][3][3];

    // Calling Functions.
    gettingElementsFun(myArray);
    printArrayFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Three Dimensional Array Program (Version 1) ..\n\n");
}

// Getting elements - Function.
void gettingElementsFun(int arr[3][3][3])
{
    printf("Please enter elements of array: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
}

// Print Array - Function.
void printArrayFun(int arr[3][3][3])
{
    printf("\nArrays:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
//* End Function ..
