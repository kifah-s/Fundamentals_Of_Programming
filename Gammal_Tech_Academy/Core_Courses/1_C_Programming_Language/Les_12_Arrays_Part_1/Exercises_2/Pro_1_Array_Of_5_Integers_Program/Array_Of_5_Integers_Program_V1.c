

//* Array Of 5 Integers Program (Version 1).

/*
 * Write a program that reserves an array of 5 integers,
 * takes input for these numbers from the user,
 * and outputs the entered array.
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
! Entered Numbers: 1 2 3 4 5
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingNumbersFun(int arr[]);
void printArrayFun(int arr[]);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int myArr[5];

    gettingNumbersFun(myArr);
    printArrayFun(myArr);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Array Of 5 Integers Program (Version 1) ..\n\n");
}

// Getting Numbers - Function.
void gettingNumbersFun(int arr[])
{
    printf("Please enter 5 Numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Number %i: ", i + 1);
        scanf("%i", &arr[i]);
    }
}

// Print Array - Function.
void printArrayFun(int arr[])
{
    printf("\nEntered Numbers: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", arr[i]);
    }
}

//* End Function ..
