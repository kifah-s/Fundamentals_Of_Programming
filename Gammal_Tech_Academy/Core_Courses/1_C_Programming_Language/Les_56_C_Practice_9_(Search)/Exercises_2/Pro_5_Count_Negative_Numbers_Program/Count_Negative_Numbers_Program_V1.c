

//* Count Negative Numbers Program (Version 1).

/*
 * Write a program to count the number of negative numbers in an array.
 */

/*
! Input:
! Please enter the number of elements: 4
! 1) Please enter number: -5
! 2) Please enter number: -6
! 3) Please enter number: 1
! 4) Please enter number: 2

! Output:
! Number of negative numbers: 2
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumberOfElementsFun(int numOfEle);
void printCounterFun(int numOfEle, int arr[], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int numberOfElements = 0, counter = 0;

    // Call Functions.
    numberOfElements = receiveNumberOfElementsFun(numberOfElements);

    // Declare Arrays.
    int myNumbers[numberOfElements];

    // Call Functions.
    printCounterFun(numberOfElements, myNumbers, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Negative Numbers Program (Version 1) ..\n\n");
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

// Count negative numbers - Function.
int countNegativeNumbersFun(int numOfEle, int arr[], int cou)
{
    for (int i = 0; i < numOfEle; i++)
    {
        if (arr[i] < 0)
        {
            cou++;
        }
    }

    return cou;
}

// Print counter - Function.
void printCounterFun(int numOfEle, int arr[], int cou)
{
    receiveNumbersFun(numOfEle, arr);
    cou = countNegativeNumbersFun(numOfEle, arr, cou);

    printf("\nNumber of negative numbers: %d", cou);
}
//* End Function ..
