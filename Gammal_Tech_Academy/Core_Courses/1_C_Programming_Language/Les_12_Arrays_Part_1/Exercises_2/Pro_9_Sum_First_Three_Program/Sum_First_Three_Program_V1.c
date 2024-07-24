

//* Sum First Three Program (Version 1).

/*
 * Write a program that declares an array of 5 integers,
 * reads 5 numbers from the user, calculates the sum of the first three numbers,
 * and then outputs the total sum.
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
! Sum of the first three numbers = 6
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingNumbersFun(int s, int arr[]);
void sumAndPrintFirstThreeNumbersFun(int s, int arr[], int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable And Array.
    int myArraySize = 5, myArray[myArraySize], sum = 0;

    // Getting Number Of Array.
    gettingNumbersFun(myArraySize, myArray);

    // Sum And Print first three Numbers Of Array.
    sumAndPrintFirstThreeNumbersFun(myArraySize, myArray, sum);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum First Three Program (Version 1) ..\n\n");
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

// Sum And Print First three Numbers Of Array - Function.
void sumAndPrintFirstThreeNumbersFun(int s, int arr[], int sum)
{
    for (int i = 0; i < 3; i++)
    {
        // sum = sum + arr[i];
        sum += arr[i];
    }
    printf("\nSum of the first three numbers = %i", sum);
}

//* End Function ..
