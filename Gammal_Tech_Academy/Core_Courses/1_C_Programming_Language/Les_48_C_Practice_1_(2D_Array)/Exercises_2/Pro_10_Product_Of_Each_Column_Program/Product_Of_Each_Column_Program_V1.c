

//* Product Of Each Column Program (Version 1).

/*
 * Write a program to find the product of each column in a 2D array { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }.
 */

/*
! Output:
! Product of elements in column 1: 28
! Product of elements in column 2: 80
! Product of elements in column 3: 162
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printElementsFun(int arr[3][3]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};

    // Call Functions.
    printElementsFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Product Of Each Column Program (Version 1) ..\n\n");
}

// Print Elements - Function.
void printElementsFun(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        int product = 1;
        for (int j = 0; j < 3; j++)
        {
            product = product * arr[j][i];
        }

        printf("Product of elements in column %d: %d\n", i + 1, product);
    }

    // {1, 2, 3}
    // {4, 5, 6}
    // {7, 8, 9}
}
//* End Function ..
