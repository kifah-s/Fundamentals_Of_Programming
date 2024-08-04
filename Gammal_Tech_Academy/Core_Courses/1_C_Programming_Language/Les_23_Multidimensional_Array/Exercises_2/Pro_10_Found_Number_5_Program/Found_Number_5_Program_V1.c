

//* Found Number 5 Program (Version 1).

/*
 * Write a program that initializes a three-dimensional array x with predefined integer values,
 * The program then checks whether the value '5' is present in the array using nested loops,
 *  If '5' is found, it prints "found," otherwise, it prints "not found."
 */

/*
! Output:
! Found.
*/

#include <stdio.h>

void welcomeMessageFun();
void foundNumber5Fun(int arr[3][3][3], int cou);

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
    foundNumber5Fun(myArray, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Found Number 5 Program (Version 1) ..\n\n");
}

// Print Array - Function.
void foundNumber5Fun(int arr[3][3][3], int cou)
{
    printf("Array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d  ", arr[i][j][k]);

                // Check number 3.
                if (arr[i][j][k] == 5)
                {
                    cou++;
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    if (cou > 0)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}
//* End Function ..
