

//* Doubles Each Elements Program (Version 1).

/*
 * Write a program that initializes an array of integers {3, 6, 9, 12, 15} and doubles each element's value.
 * Display the modified array elements.
 */

/*
! Output:
! Original Array Elements: 3 6 9 12 15
! Modified Array Elements: 6 12 18 24 30
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
    int myArray[] = {3, 6, 9, 12, 15};
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
    printf("\n\nYou welcome in Doubles Each Elements Program (Version 1) ..\n\n");
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
    for (int i = 0; i < numOfEle; i++)
    {
        arr[i] = arr[i] * 2;
        printf("%d ", arr[i]);
    }
}
//* End Function ..
