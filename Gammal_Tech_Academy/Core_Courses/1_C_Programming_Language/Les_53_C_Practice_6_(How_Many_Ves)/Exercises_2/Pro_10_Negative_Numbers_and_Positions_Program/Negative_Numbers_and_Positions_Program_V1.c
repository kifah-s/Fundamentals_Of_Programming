

//* Negative Numbers and Positions Program (Version 1).

/*
 * Write a program to count the number of negative numbers in an array and print their positions.
 */

/*
! Output:
! Negative numbers and their positions :
! Number -2, Position: 2
! Number -1, Position: 4
! Number -7, Position: 5
! Number -4, Position: 7

! Total negative numbers: 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printCountOfNegativeFun(int arrLen, int arr[], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    int myArray[] = {5, -2, 8, -1, -7, 3, -4};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);
    int count = 0;

    // Call Functions.
    printCountOfNegativeFun(arrLength, myArray, count);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Negative Numbers and Positions Program (Version 1) ..\n\n");
}

// Count negative numbers - Function.
int countNegativeNumbersFun(int arrLen, int arr[], int cou)
{
    printf("Negative numbers and their positions: \n");
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] < 0)
        {
            printf("Number: %d, Position: %d\n", arr[i], i + 1);
            cou++;
        }
    }

    return cou;
}

// Print number of negative numbers - Function.
void printCountOfNegativeFun(int arrLen, int arr[], int cou)
{
    cou = countNegativeNumbersFun(arrLen, arr, cou);
    printf("\nTotal negative numbers: %d", cou);
}
//* End Function ..
