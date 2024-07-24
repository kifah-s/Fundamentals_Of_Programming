

//* Array Of 7 Integers Program (Version 1).

/*
 * Write a program that declares an array of 7 integers,
 * reads 7 numbers from the user,
 * and then outputs the first 4 numbers of the entered array.
 */

/*
! Input:
! Please enter 7 Numbers:
! Number 1: 1
! Number 2: 2
! Number 3: 3
! Number 4: 4
! Number 5: 5
! Number 6: 7
! Number 7: 9

! Output:
! Entered Numbers (first 4): 1 2 3 4
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingNumbersFun(int s, int arr[]);
void printArrayFun(int arr[]);

int main()
{
    welcomeMessageFun();

    // Declare Variables.
    int myArraySize = 7, myArray[myArraySize];

    gettingNumbersFun(myArraySize, myArray);
    printArrayFun(myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Array Of 7 Integers Program (Version 1) ..\n\n");
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
void printArrayFun(int arr[])
{
    printf("\nEntered Numbers (first 4): ");

    for (int i = 0; i < 4; i++)
    {
        printf("%i ", arr[i]);
    }
}

//* End Function ..
