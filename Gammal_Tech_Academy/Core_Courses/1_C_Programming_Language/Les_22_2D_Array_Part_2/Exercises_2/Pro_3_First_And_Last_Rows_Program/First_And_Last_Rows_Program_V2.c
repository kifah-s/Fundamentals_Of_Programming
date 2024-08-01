

//* First And Last Rows Program (Version 2).

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
void printFirstAndLastRowsFun(int mat[3][3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myMatrix[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9}};

    // Calling Functions.
    printFirstAndLastRowsFun(myMatrix);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in First And Last Rows Program (Version 2) ..\n\n");
}

// Print First And Last Row - Function.
void printFirstAndLastRowsFun(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            printf("First Row:\n");
            for (int j = 0; j < 3; j++)
            {
                printf("%d  ", mat[0][j]);
            }
        }
        else if (i == 2)
        {
            printf("\n\nSecond Row:\n");
            for (int j = 0; j < 3; j++)
            {
                printf("%d  ", mat[2][j]);
            }
        }
    }
}
//* End Function ..
