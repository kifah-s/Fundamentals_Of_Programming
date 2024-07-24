

//* Size Of Array Program (Version 1).

/*
 * Write a program that prompts the user to enter the size of an array and then,
 * reads that number of integers to populate the array, Finally, print the entered array.
 */

/*
! Input:
! Please enter the size of array: 4

! Please enter 4 Numbers:
! Number 1: 1
! Number 2: 2
! Number 3: 3
! Number 4: 4

! Output:
! Entered Numbers: 1 2 3 4
*/

#include <stdio.h>

void welcomeMessageFun();
int gettingSizeOfArrayFun(int s);
void gettingNumbersFun(int s, int arr[]);
void printArrayFun(int s, int arr[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int myArraySize = 0;

    // Getting Size Of Array.
    myArraySize = gettingSizeOfArrayFun(myArraySize);

    // Declare Array.
    int myArray[myArraySize];

    // Getting Number Of Array.
    gettingNumbersFun(myArraySize, myArray);

    // Print Array.
    printArrayFun(myArraySize, myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Size Of Array Program (Version 1) ..\n\n");
}

// Getting Size Of Array - Function.
int gettingSizeOfArrayFun(int s)
{
    printf("Please enter the size of array: ");
    scanf("%i", &s);

    return s;
}

// Getting Numbers - Function.
void gettingNumbersFun(int s, int arr[])
{
    printf("\nPlease enter %i Numbers:\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("Number %i: ", i + 1);
        scanf("%i", &arr[i]);
    }
}

// Print Array - Function.
void printArrayFun(int s, int arr[])
{
    printf("\nEntered Numbers: ");

    for (int i = 0; i < s; i++)
    {
        printf("%i ", arr[i]);
    }
}

//* End Function ..
