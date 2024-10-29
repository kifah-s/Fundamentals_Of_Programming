

//* Even and Odd Numbers 6 Program (Version 1).

/*
 * Write a program to store even and odd numbers in separate arrays and calculate their sums.
 */

/*
! Output:
! Sum of of Even numbers: 30
! Sum of of Odd numbers: 25
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void calculateSumFun(int arrLen, int arr[], int sEven, int sOdd);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Array and Variables.
    int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arrLength = sizeof(myArray) / sizeof(myArray[0]);
    int sumEven = 0, sumOdd = 0;

    // Call Functions.
    calculateSumFun(arrLength, myArray, sumEven, sumOdd);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Even and Odd Numbers 6 Program (Version 1) ..\n\n");
}

// Calculate Sum - Function.
void calculateSumFun(int arrLen, int arr[], int sEven, int sOdd)
{
    for (int i = 0; i < arrLen; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sEven = sEven + arr[i];
        }
        else
        {
            sOdd = sOdd + arr[i];
        }
    }

    printf("\nSum of Even numbers is: %d", sEven);
    printf("\nSum of Odd numbers is: %d", sOdd);
}
//* End Function ..
