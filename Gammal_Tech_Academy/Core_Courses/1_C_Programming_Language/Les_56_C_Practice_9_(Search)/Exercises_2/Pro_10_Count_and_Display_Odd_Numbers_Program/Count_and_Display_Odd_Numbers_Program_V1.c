

//* Count and Display Odd Numbers Program (Version 1).

/*
 * Write a program to calculate the product of even numbers in an array.
 */

/*
! Input:
! Please enter the number of elements: 4
! 1) Please enter number: 1
! 2) Please enter number: 2
! 3) Please enter number: 3
! 4) Please enter number: 5

! Output:
! Odd Numbers:
! 1
! 3
! 5
! Numbers Of Odd Numbers: 3
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumberOfElementsFun(int numOfEle);
void countAndDisplayOddNumbersFun(int numOfEle, int arr[], int cou);

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
    countAndDisplayOddNumbersFun(numberOfElements, myNumbers, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count and Display Odd Numbers Program (Version 1) ..\n\n");
}

// Receive number of elements - Function.
int receiveNumberOfElementsFun(int numOfEle)
{
    printf("Please enter the number of elements: ");
    scanf("%d", &numOfEle);

    return numOfEle;
}

// Receive numbers - Function.
int receiveNumbersFun(int numOfEle, int arr[])
{
    for (int i = 0; i < numOfEle; i++)
    {
        printf("%d) Please enter a number: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Count and display odd numbers - Function.
void countAndDisplayOddNumbersFun(int numOfEle, int arr[], int cou)
{
    receiveNumbersFun(numOfEle, arr);

    printf("\nOdd Numbers:\n");
    for (int i = 0; i < numOfEle; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d\n", arr[i]);
            cou++;
        }
    }
    printf("\nNumbers Of Odd Numbers: %d", cou);
}
//* End Function ..
