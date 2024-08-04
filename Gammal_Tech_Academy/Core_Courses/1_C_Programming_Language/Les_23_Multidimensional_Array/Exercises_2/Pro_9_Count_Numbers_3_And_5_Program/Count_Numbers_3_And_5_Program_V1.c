

//* Count Numbers 3 And 5 Program (Version 1).

/*
 * Write a program that initializes a three-dimensional array x with predefined integer values,
 * The program then calculates and prints the count of occurrences of the values '3' and '5' in the array,
 * using nested loops.
 */

/*
! Output:
! Count of number 3 and 5: 10
*/

#include <stdio.h>

void welcomeMessageFun();
void countNumber3And5Fun(int mat[3][3][3], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array.
    int myArray[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                            {{6, 5, 8}, {9, 4, 5}, {3, 5, 9}},
                            {{9, 8, 2}, {9, 6, 3}, {3, 3, 3}}};

    // Declare Variables.
    int counter = 0;

    // Calling Functions.
    countNumber3And5Fun(myArray, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Numbers 3 and 5 Program (Version 1) ..\n\n");
}

// Print Array - Function.
void countNumber3And5Fun(int arr[3][3][3], int cou)
{
    printf("Array and count of number 3 and 5:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d  ", arr[i][j][k]);

                // Check number 3 And 5.
                if (arr[i][j][k] == 3 || arr[i][j][k] == 5)
                {
                    cou++;
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("Count of numbers 3 and 5: %d", cou);
}
//* End Function ..
