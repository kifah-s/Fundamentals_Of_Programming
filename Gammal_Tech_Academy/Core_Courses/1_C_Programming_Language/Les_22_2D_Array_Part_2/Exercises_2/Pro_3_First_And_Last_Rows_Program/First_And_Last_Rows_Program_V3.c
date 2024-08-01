

//* First And Last Rows Program (Version 3).

/*
 * Write a program that initializes a 3x3 matrix with predefined values,
 * and prints the first and last rows of the matrix.
 */

/*
! Output:
! First Row:
! 1 2 3

! Last Row:
! 7 8 9
*/

#include <stdio.h>

void welcomeMessageFun();
void printFirstRowFun(int mat[3][3]);
void printSecondRowFun(int mat[3][3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myMatrix[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    // Calling Functions.
    printFirstRowFun(myMatrix);
    printSecondRowFun(myMatrix);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in First And Last Rows Program (Version 3) ..\n\n");
}

// Print First Row - Function.
void printFirstRowFun(int mat[3][3])
{
    printf("First Row:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d  ", mat[0][i]);
    }
}

// Print Second Row - Function.
void printSecondRowFun(int mat[3][3])
{
    printf("\n\nSecond Row:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d  ", mat[2][i]);
    }
}
//* End Function ..
