

//* Count Number Program (Version 2).

/*
 * Write a program to count the occurrences of a number in a given set of numbers.
 */

/*
! Input:
! Please enter the number of elements: 4
! Please enter the number to search: 5
! 1) Please enter number: 2
! 2) Please enter number: 5
! 3) Please enter number: 3
! 4) Please enter number: 4

! Output:
! Count: 1
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

void welcomeMessageFun();
int printCounterFun(int numOfEle, int numToSea, int arr[], int cou);

int main()
{
    // Welcome Message.
    welcomeMessageFun();

    // Declare Arrays and Variables.
    int numberOfElements = 0, numberToSearch = 0, counter = 0;
    int myNumbers[100];

    // Call Functions.
    printCounterFun(numberOfElements, numberToSearch, myNumbers, counter);

    printf("\n\n");

    return 0;
}

//* Functions ..
// Welcome message - Function.
void welcomeMessageFun()
{
    printf("\n\nYou welcome in Count Number Program (Version 2) ..\n\n");
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
int receiveNumbersFun(int numOfEle, int arr[])
{
    for (int i = 0; i < numOfEle; i++)
    {
        printf("%d) Please enter a number: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Search for number - Function.
int searchForNumberFun(int numOfEle, int numToSea, int arr[], int cou)
{
    for (int i = 0; i < numOfEle; i++)
    {
        if (arr[i] == numToSea)
        {
            cou++;
        }
    }

    return cou;
}

// Print counter - Function.
int printCounterFun(int numOfEle, int numToSea, int arr[], int cou)
{
    numOfEle = receiveNumberOfElementsFun(numOfEle);
    numToSea = receiveNumberToSearchFun(numToSea);
    receiveNumbersFun(numOfEle, arr);
    cou = searchForNumberFun(numOfEle, numToSea, arr, cou);

    printf("\ncounter: %d", cou);
}
//* End Function ..
