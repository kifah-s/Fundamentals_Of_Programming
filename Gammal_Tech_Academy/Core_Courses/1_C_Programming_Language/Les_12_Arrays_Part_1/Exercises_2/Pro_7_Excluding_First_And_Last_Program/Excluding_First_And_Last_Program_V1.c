

//* Excluding First And Last Program (Version 1).

/*
 * Write a program that declares an array of 5 integers,
 * reads 5 numbers from the user,
 * and then outputs Entered numbers (excluding first and last).
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
! Entered Numbers (Excluding First And Last): 2 3 4
*/

#include <stdio.h>

void welcomeMessageFun();
void gettingNumbersFun(int s, int arr[]);
void printArrayExcludingFirstAndLastFun(int s, int arr[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variable And Array.
    int myArraySize = 5, myArray[myArraySize];

    // Getting Number Of Array.
    gettingNumbersFun(myArraySize, myArray);

    // Print Array In Reverse Order.
    printArrayExcludingFirstAndLastFun(myArraySize, myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Excluding First And Last Program (Version 1) ..\n\n");
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

// Print Array IExcluding First And Last - Function.
void printArrayExcludingFirstAndLastFun(int s, int arr[])
{
    printf("\nEntered Numbers (Excluding First And Last): ");

    for (int i = 1; i < s - 1; i++)
    {
        printf("%i ", arr[i]);
    }
}

//* End Function ..
