

//* Square Of Number Program (Version 1).

/*
 * Write a program to calculate the square of each number in an array.
 */

/*
! Input:
! Please enter the number of elements: 3
! 1) Please enter number: 1
! 2) Please enter number: 2
! 3) Please enter number: 3

! Output:
! Square of 1: 1
! Square of 2: 4
! Square of 3: 9
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumberOfElementsFun(int numOfEle);
void printSquareFun(int numOfEle, int arr[], int squ);

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
    printSquareFun(numberOfElements, myNumbers, squareNumber);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Square Of Number Program (Version 1) ..\n\n");
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

// Print Square - Function.
void printSquareFun(int numOfEle, int arr[], int squ)
{
    receiveNumbersFun(numOfEle, arr);

    for (int i = 0; i < numOfEle; i++)
    {
        squ = arr[i] * arr[i];
        printf("\nSquare of %d: %d", arr[i], squ);
    }
}
//* End Function ..