

//* Array Of 5 Integers 2 Program (Version 1).

/*
 * Write a program that reserves an array of 5 integers,
 * takes inputs of these numbers from the user,
 * and outputs each number on a line.
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
! Entered Numbers:
! 1
! 2
! 3
! 4
! 5
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingNumbersFun(int s, int arr[]);
void printArrayFun(int s, int arr[]);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int myArraySize = 5, myArray[myArraySize];

    gettingNumbersFun(myArraySize, myArray);
    printArrayFun(myArraySize, myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Array Of 5 Integers 2 Program (Version 1) ..\n\n");
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

// Print Array - Function.
void printArrayFun(int s, int arr[])
{
    printf("\nEntered Numbers:\n");

    for (int i = 0; i < s; i++)
    {
        printf("%i\n", arr[i]);
    }
}

//* End Function ..
