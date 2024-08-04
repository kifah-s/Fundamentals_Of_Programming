

//* Count Number 3 Program (Version 1).

/*
 * Write a program that initializes a three-dimensional array x with predefined integer values,
 * The program then calculates and prints the count of occurrences of the value '3' in the array,
 * using nested loops.
 */

/*
! Output:
! Count of number 3: 6
*/

#include <stdio.h>

void welcomeMessageFun();
void countNumber3Fun(int arr[3][3][3], int cou);

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
    countNumber3Fun(myArray, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Number 3 Program (Version 1) ..\n\n");
}

// Print Array - Function.
void countNumber3Fun(int arr[3][3][3], int cou)
{
    printf("Array and count of number 3:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d  ", arr[i][j][k]);

                // Check number 3.
                if (arr[i][j][k] == 3)
                {
                    cou++;
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("Count of number 3: %d", cou);
}
//* End Function ..
