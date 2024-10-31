

//* Calculate Negative Numbers Program (Version 1).

/*
 * Write a program to count the number of negative numbers and calculate their sum in an array.
 */

/*
! Output:
! Number of negative numbers in the array: 4
! Sum of negative numbers is: 14
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printNumAndSumNegativeFun(int arrLen, int arr[], int cou, int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    int myArray[] = {5, -2, 8, -1, -7, 3, -4};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);
    int count = 0, sum = 0;

    // Call Functions.
    printNumAndSumNegativeFun(arrLength, myArray, count, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Calculate Negative Numbers Program (Version 1) ..\n\n");
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

// Sum negative numbers - Function.
int sumNegativeNumbersFun(int arrLen, int arr[], int sum)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] < 0)
        {
            sum = sum + arr[i];
        }
    }

    return sum;
}

// Print number of negative numbers - Function.
void printNumAndSumNegativeFun(int arrLen, int arr[], int cou, int sum)
{
    sum = sumNegativeNumbersFun(arrLen, arr, sum);
    cou = countNegativeNumbersFun(arrLen, arr, cou);

    printf("Number of negative numbers in the array: %d", cou);
    printf("\nSum of negative numbers is: %d", sum);
}
//* End Function ..
