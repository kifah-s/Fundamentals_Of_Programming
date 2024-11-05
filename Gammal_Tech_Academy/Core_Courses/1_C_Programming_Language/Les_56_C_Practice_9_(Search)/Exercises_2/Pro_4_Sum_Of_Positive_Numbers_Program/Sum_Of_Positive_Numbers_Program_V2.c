

//* Sum Of Positive Numbers Program (Version 2).

/*
 * Write a program to find the sum of positive numbers in an array.
 */

/*
! Input:
! Please enter the number of elements: 4
! 1) Please enter number: -5
! 2) Please enter number: 6
! 3) Please enter number: 1
! 4) Please enter number: -9

! Output:
! Sum Of Positive Numbers: 7
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int receiveNumberOfElementsFun(int numOfEle);
void printSumFun(int numOfEle, int arr[], int sum);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Variables.
    int numberOfElements = 0, sumOfPositiveNumbers = 0;

    // Call Functions.
    numberOfElements = receiveNumberOfElementsFun(numberOfElements);

    // Declare Arrays.
    int myNumbers[numberOfElements];

    // Call Functions.
    printSumFun(numberOfElements, myNumbers, sumOfPositiveNumbers);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Sum Of Positive Numbers Program (Version 2) ..\n\n");
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

// Sum Of positive numbers - Function.
int sumOfPositiveNumbersFun(int numOfEle, int arr[], int sum)
{
    for (int i = 0; i < numOfEle; i++)
    {
        if (arr[i] > 0)
        {
            sum = sum + arr[i];
        }
    }

    return sum;
}

//  Print sum - Function.
void printSumFun(int numOfEle, int arr[], int sum)
{
    receiveNumbersFun(numOfEle, arr);
    sum = sumOfPositiveNumbersFun(numOfEle, arr, sum);

    printf("\nSum Of Positive Numbers: %d.", sum);
}
//* End Function ..
