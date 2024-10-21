

//* Multiples Of 3 Program (Version 1).

/*
 * Write a program that initializes an array with the elements {3, 7, 1, 4, 9, 5, 2},
 * and then adds 2 to each element at indices that are multiples of 3.
 * Display the original and modified array elements using a for loop, Provide the program's output.
 */

/*
! Output:
! Original Array Elements: 3 7 1 4 9 5 2
! Modified Array Elements: 5 6 4
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void printOriginalArrayElementsFun(int numOfEle, int arr[]);
void printModifiedArrayElementsFun(int numOfEle, int arr[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray[] = {3, 7, 1, 4, 9, 5, 2};
    int numberOfElements = sizeof(myArray) / sizeof(myArray[0]);

    // Print Original Array Elements.
    printOriginalArrayElementsFun(numberOfElements, myArray);

    // Print Modified Array Elements.
    printModifiedArrayElementsFun(numberOfElements, myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Multiples Of 3 Program (Version 1) ..\n\n");
}

// Print Original Array Elements - Function.
void printOriginalArrayElementsFun(int numOfEle, int arr[])
{
    printf("Original Array Elements: ");
    for (int i = 0; i < numOfEle; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Print Modified Array Elements - Function.
void printModifiedArrayElementsFun(int numOfEle, int arr[])
{
    printf("\nModified Array Elements: ");
    for (int i = 0; i < numOfEle; i = i + 3)
    {
        arr[i] = arr[i] + 2;
        printf("%d ", arr[i]);
    }
}
//* End Function ..
