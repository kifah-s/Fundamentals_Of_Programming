

//* Total Sum Program (Version 1).

/*
 * Write a program that declares an array of 5 integers,
 * reads 5 numbers from the user,
 * calculates their sum, and then outputs the total sum.
 */

/*
! Input:
! Please enter 5 Numbers:
! Number 1: 1
! Number 2: 2
! Number 3: 3
! Number 4: 4
! Number 5: 5

! Output:
! Sum = 15
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingNumbersFun(int s, int arr[]);
void sumAndPrintNumbersOfArrayFun(int s, int arr[], int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable And Array.
    int myArraySize = 5, myArray[myArraySize], sum = 0;

    // Getting Number Of Array.
    gettingNumbersFun(myArraySize, myArray);

    // Sum And Print Numbers Of Array.
    sumAndPrintNumbersOfArrayFun(myArraySize, myArray, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Total Sum Program (Version 1) ..\n\n");
}

// Getting Numbers - Function.
void gettingNumbersFun(int s, int arr[])
{
    printf("Please enter %i Numbers:\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("Number %i: ", i + 1);
        scanf("%i", &arr[i]);
    }
}

// Sum And Print Numbers Of Array - Function.
void sumAndPrintNumbersOfArrayFun(int s, int arr[], int sum)
{
    for (int i = 0; i < s; i++)
    {
        // sum = sum + arr[i];
        sum += arr[i];
    }
    printf("\nSum = %i", sum);
}

//* End Function ..
