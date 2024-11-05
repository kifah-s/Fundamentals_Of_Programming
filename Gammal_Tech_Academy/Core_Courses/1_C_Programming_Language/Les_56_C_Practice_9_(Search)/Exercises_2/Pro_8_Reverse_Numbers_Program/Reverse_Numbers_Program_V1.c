

//* Reverse Numbers Program (Version 1).

/*
 * Write a program to reverse the order of numbers in an array.
 */

/*
! Input:
! Please enter the number of elements: 3
! 1) Please enter number: 1
! 2) Please enter number: 2
! 3) Please enter number: 3

! Output:
! Reversed Numbers:
! 3
! 2
! 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumberOfElementsFun(int numOfEle);
void printReversedNumbersFun(int numOfEle, int arr[]);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int numberOfElements = 0, squareNumber = 0;

    // Call Functions.
    numberOfElements = receiveNumberOfElementsFun(numberOfElements);

    // Declare Arrays.
    int myNumbers[numberOfElements];

    // Call Functions.
    printReversedNumbersFun(numberOfElements, myNumbers);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Reverse Numbers Program (Version 1) ..\n\n");
}

// Receive number of elements - Function.
int receiveNumberOfElementsFun(int numOfEle)
{

    printf("Please enter the number of elements: ");
    scanf("%d", &numOfEle);

    return numOfEle;
}

// Receive numbers - Function.
void receiveNumbersFun(int numOfEle, int arr[])
{
    for (int i = 0; i < numOfEle; i++)
    {
        printf("%d) Please enter a number: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Print reversed numbers - Function.
void printReversedNumbersFun(int numOfEle, int arr[])
{
    receiveNumbersFun(numOfEle, arr);

    printf("\nReversed Numbers:\n");
    for (int i = numOfEle - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
}
//* End Function ..