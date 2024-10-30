

//* Negative Numbers Program (Version 1).

/*
 * Write a program to count the number of negative numbers in an array.
 */

/*
! Output:
! Number of negative numbers in the array: 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printNumOfNegNumFun(int arrLen, int arr[], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    int myArray[] = {5, -2, 8, -1, -7, 3, -4};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);
    int count = 0;

    // Call Functions.
    printNumOfNegNumFun(arrLength, myArray, count);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Negative Numbers Program (Version 1) ..\n\n");
}

// Count negative numbers - Function.
int countNegativeNumbersFun(int arrLen, int arr[], int cou)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] < 0)
        {
            cou++;
        }
    }

    return cou;
}

// Print number of negative numbers - Function.
void printNumOfNegNumFun(int arrLen, int arr[], int cou)
{
    cou = countNegativeNumbersFun(arrLen, arr, cou);

    printf("Number of negative numbers in the array: %d", cou);
}
//* End Function ..
