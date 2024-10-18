

//* Adds 2 to Each Element Program (Version 1).

/*
 * Write a program that initializes an array with the elements {3, 7, 1, 4, 9} and then adds 2 to each element.
 * Display the modified array elements using a for loop. Provide the program's output.
 */

/*
! Output:
! Original Array Elements: 3 7 1 4 9
! Modified Array Elements: 5 9 3 6 11
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void adds2toEachElementFun(int numOfEle, int arr[]);
void printElementsFun(int numOfEle, int arr[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int myArray[] = {3, 7, 1, 4, 9};
    int numberOfElements = sizeof(myArray) / sizeof(myArray[0]);

    // Print Original Array Elements.
    printf("Original Array Elements: ");
    printElementsFun(numberOfElements, myArray);

    // Adds 2 to Each Element.
    adds2toEachElementFun(numberOfElements, myArray);

    // Print Modified Array Elements.
    printf("\nModified Array Elements: ");
    printElementsFun(numberOfElements, myArray);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Adds 2 to Each Element Program (Version 1) ..\n\n");
}

// Adds 2 to Each Element - Function.
void adds2toEachElementFun(int numOfEle, int arr[])
{
    for (int i = 0; i < numOfEle; i++)
    {
        arr[i] = arr[i] + 2;
    }
}

// Print Elements - Function.
void printElementsFun(int numOfEle, int arr[])
{
    for (int i = 0; i < numOfEle; i++)
    {
        printf("%d ", arr[i]);
    }
}
//* End Function ..
