

//* Three Dimensional Array 2 Program (Version 1).

/*
 * Write a program that initializes a three-dimensional array x with predefined integer values,
 * The program then prints the content of the array using nested loops.
 */

/*
! Output:
! 1 2 3
! 4 5 6
! 7 8 9

! 6 5 8
! 9 4 5 
! 3 5 9

! 9 8 2
! 9 6 3
! 3 3 3
*/

#include <stdio.h>

void welcomeMessageFun();
void printArrayFun(int arr[3][3][3]);

int main() 
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                            {{6, 5, 8}, {9, 4, 5}, {3, 5, 9}},
                            {{9, 8, 2}, {9, 6, 3}, {3, 3, 3}}};

    // Calling Functions.
    printArrayFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Three Dimensional Array 2 Program (Version 1) ..\n\n");
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
