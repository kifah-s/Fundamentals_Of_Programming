

//* Search Index Program (Version 1).

/*
 * Write a program to search for a number in an array and display its index.
 */

/*
! Input:
! Please enter the number of elements: 3
! Please enter the number to search: 3
! 1) Please enter number: 12
! 2) Please enter number: 2
! 3) Please enter number: 3

! Output:
! Number found at index: 2
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
void numberIndexFun(int numOfEle, int numToSea, int arr[], int ind);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int numberOfElements = 0, numberToSearch = 0, myNumbers[100], numberIndex = 0;

    // Call Functions.
    numberIndexFun(numberOfElements, numberToSearch, myNumbers, numberIndex);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Search Index Program (Version 1) ..\n\n");
}

// Receive number of elements - Function.
int receiveNumberOfElementsFun(int numOfEle)
{
    printf("Please enter the number of elements: ");
    scanf("%d", &numOfEle);

    return numOfEle;
}

// Receive number to search - Function.
int receiveNumberToSearchFun(int numToSea)
{
    printf("Please enter the number to search: ");
    scanf("%d", &numToSea);

    return numToSea;
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

// Check index - Function.
int checkIndexFun(int numOfEle, int numToSea, int arr[])
{
    for (int i = 0; i < numOfEle; i++)
    {
        if (arr[i] == numToSea)
        {
            return i;
        }
    }
}

//  number index - Function.
void numberIndexFun(int numOfEle, int numToSea, int arr[], int ind)
{
    numOfEle = receiveNumberOfElementsFun(numOfEle);
    numToSea = receiveNumberToSearchFun(numToSea);
    receiveNumbersFun(numOfEle, arr);
    ind = checkIndexFun(numOfEle, numToSea, arr);

    printf("\nNumber found at index: %d", ind);
}
//* End Function ..
